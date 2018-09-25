#include<iostream>
    using namespace std;

class Test
{
private:
    int a;
    Test(int b) {
        a = b;
    }
public:
    void showData()
    {
        cout<<" Value: "<<a<<endl;
    }
    friend Test getObject(int );
};

Test getObject(int c)
{
    Test obj(c);
    return obj;
}

int main(int argc, char const *argv[])
{
    Test obj = getObject(5);
    obj.showData();
    return 0;
}
