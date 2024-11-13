#include<iostream>
using namespace std;
int main()
{
	int rows;
	int cols;
	cout<<"Enter the number of rows:";
	cin>>rows;
	cout<<"Enter the number of columns:";
	cin>>cols;
 int array[rows][cols];
cout<<"elements of array are:";
for(int i=0; i<rows; i++)
{
	for(int j=0; j<cols; j++)
	{
  cout<<"elements["<<i<<"]["<<j<<"]:";
  cin>>array[i][j];
}	
}

cout<<"\n the 2D array is:\n";
for(int i=0; i<rows; i++)
{
for(int j=0; j<cols; j++)
{
cout<<array[i][j]<<" ";

}
cout<<endl;
}
return 0;
}