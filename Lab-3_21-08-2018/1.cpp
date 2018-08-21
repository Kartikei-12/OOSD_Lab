#include<iostream>
    using namespace std;
class A
{
    int in;
public:
    void getV(int a)
    {
        in = a;
    }
    void showV()
    {
        cout<<"in: "<<in;
    }
};

int main()
{

    A a1;
    a1.getV(5);
    a1.showV();
    return 0;
}