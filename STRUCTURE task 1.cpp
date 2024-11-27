#include<iostream>
using namespace std;
struct book{
	string bookTitle;
	string author;
	int yearOfPublish;
	int numberOfPages;
};
int main()
{
	book b[5];
	for(int i=0; i<5; i++)
	{
	cout<<"\n enter details of book:"<<i+1<<"\n";
	
	cout<<"enter book title:";
	cin>>b[i].bookTitle;
	
	cout<<"enter author name:";
	cin>>b[i].author;
	
	cout<<"enter year of publication:";
	cin>>b[i].yearOfPublish;
	
	
    cout<<"enter number of pages:";
	cin>>b[i].numberOfPages;
	
	//CLEAR THE INPUT BUFFER
	//cin.ignore();
	}
	for(int i=0; i<5; i++){
	
	cout<<"\nBook information:\n";
	cout<<" book title:"<< b[i].bookTitle <<endl;
	cout<<" author name:"<<b[i].author<<endl;
	cout<<" Year of publication:"<< b[i].yearOfPublish <<endl;
    cout<<" Number of pages:"<< b[i].numberOfPages <<endl;
	
}
return 0;
}