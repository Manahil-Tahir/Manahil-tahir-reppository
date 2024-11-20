#include<iostream>
using namespace std;

	//function definition
void passByValue(int num)
{
num=num+10; // modifying the value
cout<<"Inside function(pass by value):"<<num<<endl;
}
int main()
{
int number=5;
cout<<"before function call:"<<number<<endl;
passByValue(number);  // passing the value
cout<<"after function call:"<<number<<endl;

return 0;
}
