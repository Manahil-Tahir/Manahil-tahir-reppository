#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str1="Hello,";
	string str2="World!";
	
	//concatenation using+operator 
	//str1.append(str2);
	string result=str1.append(str2);
	cout<<"append:"<<result<<endl;
	
	return 0;
	
}