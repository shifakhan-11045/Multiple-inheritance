#include<iostream>
using namespace std;
class std1
{	
	public:
	string c;
		void clg()
		{
		cout<<"Enter college name : ";
		cin>>c;	
		}
};
class std2
{	
	public:

	string br,name;
	int roll_no;

	void details()
	{
		cout<<"Enter branch : ";
		cin>>br;
		cout<<"Enter name : ";
		cin>>name;
		cout<<"Enter Roll Number : ";
		cin>>roll_no;
	}	
};
class std3:public std1,public std2
{
	public:
	
	
	void show_details()
	{
		cout<<"\nCollege : "<<c;
		cout<<"\nBranch : "<<br;
		cout<<"\nName : "<<name;
		cout<<"\nRoll Number : "<<roll_no;
		
	}	
};
int main()
{	cout<<"Shifa Khan\n0832CS221187\n";
	std3 s1;
	s1.clg();
	s1.details();
	s1.show_details();

	
}
