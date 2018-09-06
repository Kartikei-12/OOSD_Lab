//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Date: 04-September-2018
//copy constructor

#include<iostream>
    using namespace std;

class myClass
{
    int a;
public:
    myClass() {
        a = 0;
    }

    myClass(const myClass& original) {
        *this = original;
    }

    void show() {
        cout<<"a: "<<a<<endl;
    }
    void set(int b) {
        a = b;
    }
};

int main(int argc, char const *argv[])
{
    myClass obj1;
    obj1.set(5);
    
    myClass obj2 = obj1;
    cout<<"In copy value using = :"<<endl;
    obj2.show();

    obj1.set(10);
    myClass obj3(obj1);

    cout<<"In copy value of obj3 using constructor :"<<endl;
    obj3.show();
    
    obj1.set(15);
    cout<<"value of obj1:"<<endl;
    obj1.show();

    cout<<"value of obj3:"<<endl;
    obj3.show();
    
    return 0;
}
