#include<iostream>
using namespace std;
//function definition
void passByValue(int a, int b)
{
int d=a+b;
cout<<"The sum of the value is(passByValue):"<<d<<endl;
}
void mul(int c,int d)
{
int h=c*d;
cout<<"the multiplication of number is:"<<h<<endl;
}
void sub(int m, int n)
{
int p=m-n;
cout<<"the subtract is:"<<p<<endl;
}
int main()
{
int number1=5; int number2=6;
cout<<"enter numbers:"<<endl;
passByValue(number1,number2);
 
int x=3; int y=4;
mul(x,y);

int k=9; int l=8;
sub(k,l);

return 0;
}