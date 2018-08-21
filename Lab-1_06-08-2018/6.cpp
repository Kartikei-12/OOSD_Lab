//Swap two number
#include<iostream>
	using namespace std;
void myswap(int &a, int &b)
{
	a = a+b;
	b = a-b;
	a = a-b;
}
void myswap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
int main(int argc, char* argv[])
{
	int a=0, b=0;
	cout<<"Hello World!"<<endl;
	cout<<"Enter two number:";
	cin>>a>>b;
	myswap(a, b);
	cout<<"After swaping numbers using reference:"<<a<<" "<<b<<endl;
	cout<<"Again Enter two number:";
	cin>>a>>b;
	myswap(&a, &b);
	cout<<"After swaping numbers using pointer:"<<a<<" "<<b<<endl;
	return 0;
}
