#include<iostream>
using namespace std;
class Complex
{
	public:
		int real;
		int img;
	
		Complex()	//default constructor
		{
			real=0;
			img=0;
		}

		Complex(int x,int y)	//parametric constructor
		{
			real=x;
			img=y;
		}


		void display()
		{
			cout<<"Real : "<<real<<endl;
			cout<<"Imaginary : "<<img<<endl;
		}

		void accept()
		{
			cout<<"Enter Real part :"<<endl;
			cin>>real;
			cout<<"Enter Imaginary part :"<<endl;
			cin>>img;
		}
};
int main()
{
	int g=0;
	Complex a(7,8);
	a.display();
	Complex b[5];
	for(int i=0;i<3;i++)
	{
		b[i].accept();
	}
	for(int j=0;j<3;j++)
	{
		b[j].display();
	
	}

	for(int j=0;j<3;j++)
	{
		if(b[j].real  == 20)
		{
			cout<<"\nfound it : ";
			cout<<j;
		}
	}


	return 0;
}



