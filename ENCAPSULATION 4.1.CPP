#include<iostream>
using namespace std;

class student
{
	public:
	int id;
	char name[50];
	int age;
	char course[50];
	char city[50];
	char email[50];
	char college[50];
	
	void setData()
	{
		cout<<"id: ";
		cin>>id;
		cout<<"name:";
		cin>>name;
		cout<<"age:";
		cin>>age;
		cout<<"course:";
		cin>>course;
		cout<<"city:";
		cin>>city;
		cout<<"email:";
		cin>>email;
		cout<<"college:";
		cin>>college;
	}
	
	void getData()
	{
		cout<<"id"<<id<<endl
		<<"name:"<<name<<endl
		<<"age:"<<age<<endl
		<<"course:"<<course<<endl
		<<"city:"<<city<<endl
		<<"email:"<<email<<endl
		<<"college:"<<college<<endl;
	}
};
int main()
{
	student s1,s2,s3,s4,s5;
	s1.setData();
	s1.getData();
	s2.setData();
	s2.getData();
	s3.setData();
	s3.getData();
	s4.setData();
	s4.getData();
	s5.setData();
	s5.getData();
	
}