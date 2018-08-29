//Date: 29 August 2018
//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Assignment-3 Question 2

#include<iostream>

class Addition
{
private:
    int op1, op2;
    long int sum;
public:
    Addition(int a=0, int b=0)
    {
        op1 = a;
        op2 = b;
        sum = 0;
    }

    void show_result(void) {
        std::cout<<"Result: "<<sum<<std::endl;
    }

    friend Addition adder(int , int );
};

Addition adder(int a, int b)
{
    Addition obj(a, b);
    obj.sum = a + b;
    return obj;
}

int main(int argc, char const *argv[])
{
    Addition object = adder(5, 9);
    object.show_result();
    return 0;
}
