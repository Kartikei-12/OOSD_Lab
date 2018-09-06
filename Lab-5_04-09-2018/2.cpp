//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Date: 04-September-2018
//const

#include<iostream>
    using namespace std;

class myClass
{
    int a;
public:
    myClass() {
        a = 0;
    }
    void show() const {
        cout<<"a: "<<a<<endl;
    }
    void increment(const int b) {
        a += b;
    }
};

int main(int argc, char const *argv[])
{
    myClass obj1;
    obj1.increment(5);
    cout<<"Initial: "<<endl;
    obj1.show();
    const myClass obj2 = obj1;
    cout<<"Constant Object: "<<endl;
    obj2.show();
    return 0;
}
