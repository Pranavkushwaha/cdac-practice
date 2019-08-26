#include<iostream>
using namespace std;
class calculator
{
	public:
	void add(int a,int b)
	{
		int c=a+b;
		cout<<"addtion"<<c<<endl;
	}
	void sub(int a,int b)
	{
		cout<<"subtraction"<<a-b<<endl;
	}
	void multiply(int a,int b)
	{
		cout<<"multiplication"<<a*b<<endl;
	}
	void divide(float a,float b)
	{
		cout<<"divide"<<a/b<<endl;
	}
	
};
int main()
{
	calculator a;
	int choice;
	cout<<"\t\t\t\tWelcome to Calculator"<<endl<<endl<<endl;
	float c,b;
	cout<<"1.)Addition"<<endl;
	cout<<"2.)Subtraction"<<endl;
	cout<<"3.)Multiplication"<<endl;
	cout<<"4.)Division"<<endl<<endl<<endl;

	cout<<"Enter Your Choice : "<<endl<<endl;
	cin>>choice;

	cout<<"Enter two numbers : ";
	cin>>c>>b;
	
	switch(choice)
	{
		case 1:
			a.add(c,b);
			break;


		case 2:
			a.sub(c,b);
			break;

		case 3:
			a.multiply(c,b);
			break;

		case 4:
			a.divide(c,b);
			break;

		default:
			cout<<"Wrong Choice\n";
			break;


	}
	
return 0;
}
