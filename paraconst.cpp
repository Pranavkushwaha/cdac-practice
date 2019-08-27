#include<iostream>
#include<cstring>
using namespace std;
class Student
{
	private:
		int roll;
		char name[20];
		float marks;

	public:
		Student(int a,const char* b,float c)
		{
			roll=a;
			strcpy(name,b);
			marks=c;
		}

		void display()
		{
			cout<<"Roll : "<<roll<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"marks : "<<marks<<endl;
		}
};

int main()
{
	Student p(5,"omkar",56.0);
	p.display();

	return 0;
}
