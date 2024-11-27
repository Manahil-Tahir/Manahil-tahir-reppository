#include<iostream>
using namespace std;
struct studentGrading{	
char name[20];
int sapID;
string adress;
string department;
float marksSubject1;
float marksSubject2;
float maxMarks;
};

int main()
{
	studentGrading s1[5];
	for(int i=0; i<5; i++)
	{
	cout<<"\n enter details of student\n:"<<i+1<<endl;
	
	cout<<"enter the name of student:"<<endl;
	cin.getline(s1[i].name,20);
	cout<<"enter sap id :"<<endl;
	cin>>s1[i].sapID;
	cout<<"enter adress:"<<endl;
	cin>>s1[i].adress;
	cout<<"enter department:"<<endl;
	cin>>s1[i].department;
	cout<<"enter marks of subject 1:"<<endl;
	cin>>s1[i].marksSubject1;
	cout<<"enter marks of subject 2:"<<endl;
	cin>>s1[i].marksSubject2;
	
	//calculate maximum marks.
	s1[i].maxMarks =  (s1[i].marksSubject1 > s1[i].marksSubject2)? s1[i].marksSubject1 : s1[i].marksSubject2;
	
	 
	//clear the input bullet
	  	cin.ignore();
    }
	for(int i=0; i<5; i++)
	{
	cout<<"\n enter details of student\n:"<<i+1<<endl;
	
	cout<<" name of student:"<<(s1[i].name)<<endl;
	cout<<" sap id :"<<s1[i].sapID<<endl;
	cout<<" adress:"<<s1[i].adress<<endl;
	cout<<" department:"<<s1[i].department<<endl;
	cout<<" marks of subject 1:"<<s1[i].marksSubject1<<endl;
	cout<<" marks of subject 2:"<<s1[i].marksSubject2<<endl;
	cout<<"maximum marks:"<<s1[i].maxMarks<<endl;
	}
return 0;
}