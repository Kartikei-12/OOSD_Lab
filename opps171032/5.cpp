//Reverse a number
#include<iostream>
	using namespace std;
int reverse(int a)
{
	int ans=0;
	while(a != 0)
	{
		ans = (ans*10) + (a%10);
		a /= 10;
	}
	return ans;
}
int main(int argc, char* argv[])
{
	int a=0;
	cout<<"Hello World!"<<endl;
	cout<<"Enter number:";
	cin>>a;
	cout<<"Reversed number:"<<reverse(a)<<endl;
	return 0;
}
