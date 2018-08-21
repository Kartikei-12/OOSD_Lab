//Sum of series
#include<iostream>
#include<math.h>
	using namespace std;

int main(int argc, char* argv[])
{
	int a=0, num_terms=1;
	long double ans = 1.0;
	cout<<"Hello World!"<<endl;
	cout<<"Enter number and number of terms:";
	cin>>a>>num_terms;
	for(int i=1; i<=num_terms; ++i)
		ans += pow(a, i)/(i*1.0);
	cout<<"Sum :"<<ans<<endl;
	return 0;
}
