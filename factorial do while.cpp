#include<iostream>
using namespace std;
int main()
{
	int n; 
	int i=1;
	long factorial=1.0;
	cout<<"enter a positive integer:"<<endl;
	cin>>n;
	
do
{
factorial*=i;
i++;	
}

while(i<=n);


cout<<"factorial of"<<n<<"="<<factorial;



return 0;
}