#include<iostream.h>
#include<conio.h>
const int len=80;
class student
{
private :
	char school[len];
	char degree[len];
public:
	void get()
	{
		cout<<"\n Student Class";
		cout<<"\n Enter name of school or university: ";
		cin>>school;
		cout<<"Enter highest degree earned \n";
		cout<<"(highschool,bachelor\'s,Master\'s,Phd)";
		cin>>degree;
	}
	void put()
	{
		cout<<"\n Student Class";
		cout<<"\n School or University"<<school;
		cout<<"\n highest degree earned :"<<degree;
	}
};
class employee
{
private:
	char name[len];
	unsigned long number;
public:
	void getdata()
	{
		cout<<"\n Employee Class";
		cout<<"\n Enter  last name: ";
		cin>>name;
		cout<<"Enter number:";
		cin>>number;
	}
	void putdata()
	{
		cout<<"\n Employee Class:";
		cout<<"\n Name:"<<name;
		cout<<"\n Number :"<<number;
	}
};
class manager:private employee,private student
{
private:
	char title[len];
	double dues;
public:
	void getdata()
	{
		employee::getdata();
		cout<<"Enter Title :";
		cin>>title;
		cout<<"Enter golf club dues: ";
		cin>>dues;
		student::get();
	}
	void putdata()
	{
		employee::putdata();
		cout<<"\n Title : "<<title;
		cout<<"\n Golf club dues:"<<dues;
		student::put();
	}
};
class scientist:private employee,private student
{
private:
	int pubs;
public:
	void getdata()
	{
		cout<<"Enter number of pubs:";
		cin>>pubs;
		student::get();
	}
	void putdata()
	{
		employee::putdata();
		cout<<"\n Number of publications:"<<pubs;
		student::put();
	}
};
int main()
{
	manager m1;
	scientist s1;
	clrscr();
	cout<<"\n\t\t\t Enter data for manager";
	m1.getdata();
	cout<<"\n\t\t\t Enter data for scientist";
	s1.getdata();
	cout<<"\n\t\t\t Data on managers";
	m1.putdata();
	cout<<"\n\t\t\t Data on scientist";
	s1.putdata();
	getch();
	return 0;
	}
