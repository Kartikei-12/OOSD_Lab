//Date: 29 August 2018
//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Assignment-3 Question 1

#include<iostream>

class Test1;
class Test2;

class Test1
{
private:
    int value1;
public:
    Test1(int a=0) {
        value1 = a;
    }
    void get_data(void)
    {
        std::cout<<"Enter data member: ";
        std::cin>>value1;
    }
    void show_data(void) {
        std::cout<<"Value1 Data: "<<value1<<std::endl;
    }

    friend void swap_data(Test1& , Test2& );
};

class Test2
{
private:
    int value2;
public:
    Test2(int a=0) {
        value2 = a;
    }
    void get_data(void)
    {
        std::cout<<"Enter data member: ";
        std::cin>>value2;
    }
    void show_data(void) {
        std::cout<<"Value2 Data: "<<value2<<std::endl;
    }

    friend void swap_data(Test1& , Test2& );
};

void swap_data(Test1& obj1, Test2& obj2)
{
    obj1.value1 = obj1.value1 + obj2.value2;
    obj2.value2 = obj1.value1 - obj2.value2;
    obj1.value1 = obj1.value1 - obj2.value2;
}

int main(int argc, char const *argv[])
{
    Test1 object1(5);
    Test2 object2(7);
    
    std::cout<<"Before swap: "<<std::endl;
    object1.show_data();
    object2.show_data();

    swap_data(object1, object2);

    std::cout<<"\n\nAfter swap: "<<std::endl;
    object1.show_data();
    object2.show_data();
    
    return 0;
}
