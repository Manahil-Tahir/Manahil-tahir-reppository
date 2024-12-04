#include<iostream>
#include<cstring>  //include the header for strcpy()
using namespace std;
int main()
{
	char source[]="Hello,World!";
	char destination[50];   //make sure the destination array
	
	// use strcpy() to copy the source string into destination
	strcpy(destination,source);
	
	//print the copied string
	cout<<"Source string:"<<source <<endl;
	cout<<"Destination string:"<<destination <<endl;
	return 0;
}