#include<iostream>
#include<cstring> // one string is add into another
//used for better enhancement
using namespace std;
int main()
{
	string str1="Hello,";
	string str2="World!";
	
	//concatenating using + operator
	string result=str1+str2;
	
cout<<"Concatenated string:"<<result<<endl;
	
return 0;
}