//Check if prime number
#include<iostream>
#include<math.h>
	using namespace std;
bool check_prime(int a)
{
	if(a<2)
		return false;
	else if(a==2)
		return true;
	else if(a%2 == 0)
		return false;
	else
		for(int i=3; i<sqrt(a)+1; i+=2)
			if(a%i == 0)
				return false;
	return true;
}
int main(int argc, char* argv[])
{
	int a=0;
	cout<<"Hello World!"<<endl;
	cout<<"Enter number:";
	cin>>a;
	if(check_prime(a))
		cout<<"Number is prime";
	else
		cout<<"Number is not prime";
	cout<<endl;
	return 0;
}
