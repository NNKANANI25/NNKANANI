#include<iostream>
#include<string>

class emp;
{
	public:
		int id;
		char name[50];
		int age;
		char role[50];
		int salary;
		char city[50];
		char expreance[50];
		char company_name[50];
}
		void setData(int id,char name[50],int age,char role[50],int salary,char city[50],char expreance[50],char company_name[50])
		{
			this->id=id;
			this->name=name;
			this->age=age;
			this->role=role;
			this->salary=salary;
			this->city=city;
			this->expreance=expreance;
			this->company_name=company_name;
		}
		void getData()
		{
			cout<<"id:"<<id<<endl<<"name:"<<name<<endl<<"age:"<<age<<endl<<"role:"<<role<<endl<<"salary:"<<salary<<endl<<"city:"<<city<<endl<<"expreance:"<<expreance<<endl<<"company_name:"<<company_name<<endl
		}
		
		
