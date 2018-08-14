//Factorial of number
#include<iostream>
	using namespace std;
long double fac(int a)
{
	long double ans=1;
	for(int i=1; i<=a; ++i)
		ans *= i;
	return ans;
}
int main(int argc, char* argv[])
{
	int a=0;
	cout<<"Hello World!"<<endl;
	cout<<"Enter number:";
	cin>>a;
	cout<<"Factorial:"<<fac(a)<<endl;
	return 0;
}
