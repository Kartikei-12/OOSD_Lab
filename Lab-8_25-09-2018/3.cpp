//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Date: 25-September-2018
//
#include<iostream>
    using namespace std;

class Test
{
public:
    int a1;
    Test() {
        a1=5;
    }
};

void fun(float a)
{
    cout<<"float"<<endl
        <<a<<endl;
}

void fun(char a)
{
    cout<<"char"<<endl
        <<a<<endl;
}

void fun(Test a)
{
    cout<<"class Test"<<endl
        <<a.a1<<endl;
}

int main(int argc, char const *argv[])
{
    Test obj;
    fun(obj);
    fun(1.1f);
    fun((char)'1');
    return 0;
}
