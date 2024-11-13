#include<iostream>
using namespace std;
int main()
{
	int array[5]={2,3,5,6,7};
	int sum=0;
	cout<<"elements of the array are:";
	for(int i=0; i<=4; i++)
	{
	cout<<array[i]<<" "<<endl;

   sum+=array[i];
}
	cout<<"the sum of the array elements are:"<<sum;
	cout<<endl;
return 0;
}