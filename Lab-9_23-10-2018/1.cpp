#include<iostream>
    using namespace std;

class Test
{
    int a,b;
public:
    Test(int z=0)
    {
        a=b=z;
    }

    operator int()
    {
        return a+b;
    }

    void display()
    {
        cout<<a<<"\t"<<b<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Test obj1(5);
    int x=7;
    x=5;
    obj1=x;
    obj1.display();
    x=obj1;
    cout<<x<<endl;

    return 0;
}
