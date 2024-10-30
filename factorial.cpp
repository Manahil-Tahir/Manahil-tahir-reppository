#include<iostream>
using namespace std;
int main()
{
	
//5! 5*4*3*2*1=120
int n;
long factorial=1.0;
cout<<"enter a positive number";
cin>>n;
if(n<0)
 cout<<"error! factorial of a nagative number doesnot exit";
 
else
	for(int i=1; i<=n; i++)
{
	factorial*=i;	
}
cout<<"factorial of"<<n<<"=n"<<factorial;
return 0;
}