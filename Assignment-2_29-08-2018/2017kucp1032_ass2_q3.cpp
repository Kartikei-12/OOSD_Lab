//Date: 29 August 2018
//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Assignment-2 Question 2

#include<iostream>

class Test1;
class Test2;

class Test1
{
private:
    int dataMember;
public:
    Test1(int a=0) {
        dataMember = a;
    }
    void get_data(void)
    {
        std::cout<<"Enter data member: ";
        std::cin>>dataMember;
    }
    void show_data(void) {
        std::cout<<"Data: "<<dataMember<<std::endl;
    }

    friend get_max(Test1 , Test2 );
};

class Test2
{
private:
    int dataMember;
public:
    Test2(int a=0) {
        dataMember = a;
    }
    void get_data(void)
    {
        std::cout<<"Enter data member: ";
        std::cin>>dataMember;
    }
    void show_data(void) {
        std::cout<<"Data: "<<dataMember<<std::endl;
    }

    friend int get_max(Test1 , Test2 );
};

int get_max(Test1 obj1, Test2 obj2) {
    return (obj1.dataMember>obj2.dataMember)? obj1.dataMember:obj2.dataMember ;
}

int main(int argc, char const *argv[])
{
    Test1 object1(5);
    Test2 object2(7);
    
    std::cout<<"Maximum: "<<get_max(object1, object2);
    return 0;
}
