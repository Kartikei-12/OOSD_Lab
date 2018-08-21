//Example of static keyword
#include<iostream>
    using namespace std;

void fun()
{
    static int a = 10;
    cout<<a<<endl;
    ++a;
}

int main()
{
    int j=10;
    while(j--)
        fun();
    return 0;
}