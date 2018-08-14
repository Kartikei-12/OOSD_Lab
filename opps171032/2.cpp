//Average of two numbers
#include<iostream>
	using namespace std;
double avg(int a, int b)
{
	return (a+b)/2.0;
}
int main(int argc, char* argv[])
{
	int a=0, b=0;
	cout<<"Hello World!"<<endl;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	cout<<"Average:"<<avg(a, b)<<endl;
	return 0;
}
