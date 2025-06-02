
#include<iostream>
using namespace std;

class train
{
	public:
		int trainnumber;
		char trainname[50];
		char source[50];
		char destination[50];
		char traintime[10];
		static int traincount;
		
		void setdata()
		{
			cout<<"enter train number:";
			cin>>trainnumber;
			cout<<"enter train name:";
			cin>>trainname;
			cout<<"enter traiin sourse:";
			cin>>source;
			cout<<"enter train destination:";
			cin>>destination;
			cout<<"enter train time:";
			cin>>traintime;
			cout<<"enter train count:";
			cin>>traincount;
		}
		
		void getdata()
		
		{
		cout<<"enter train number:"<<trainnumber<<endl
		    <<"enter train name:"<<trainname<<endl
		    <<"enter train sourse:"<<source<<endl
		    <<"enter train destination:"<<destination<<endl
		    <<"enter train time:"<<traintime<<endl
		    <<"enter train count:"<<traincount<<endl;
		}
};
int train::traincount=3;
int main()
{
	train t1,t2,t3;
	t1.setdata();
	t1.getdata();
	t2.setdata();
	t2.getdata();
	t3.setdata();
	t3.getdata();
}
class railwaysystemclass
{
	public:
		train trains[100];
		int totaltrains;
		
		void addtrain()
		{
			if(char totaltrain < 100)
			{
				train(totaltrain).setdata()
				totaltrain++
				cout<<"your data entered successfully.."
			}
			else{
				cout<<"no extra space to enter the data..."
				
			}
		}
		void displayalltrain()
		{
		if(totaltrain==0)
		{
			cout<<"no train record available.\n";
		}
		for(int i=0;i<totaltrain;i++)
		{
			cout<<"\ntrain"<<i+1<<"details\n";
			trains[i].getdata();
		} 
		}
		void search(int num)
		{
			for(int i=0;i<totaltrain;i++)
			{
				if(train[i].getdata())==num)
				{
					cout<<"train found:\n";
					trains[i].
				}
			}
		
		}
	}
