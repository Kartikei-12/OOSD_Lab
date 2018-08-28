//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Different call by methods

#include<iostream>
    using namespace std;

void swap_value(auto a, auto b)
{
    auto temp = a;
    a = b;
    b = temp;
    cout<<"After swap in call by value function: "<<a<<" "<<b<<endl;
}

void swap_reference(auto &a, auto &b)
{
    auto temp = a;
    a = b;
    b = temp;
    cout<<"After swap in call by reference function: "<<a<<" "<<b<<endl;
}

void swap_poautoer(auto *a, auto *b)
{
    auto temp = *a;
    *a = *b;
    *b = temp;
    cout<<"After swap in call by poautoer function: "<<*a<<" "<<*b<<endl;
}

int main(int argc, char const *argv[])
{
    int a=1, b=2;
    cout<<"\nBefore swap: "<<a<<" "<<b<<endl;
    swap_value(a, b);
    cout<<"After swap by call by value in main: "<<a<<" "<<b<<endl;
    
    a=3;
    b=4;
    cout<<"\nBefore swap: "<<a<<" "<<b<<endl;
    swap_reference(a, b);
    cout<<"After swap by call by reference in main: "<<a<<" "<<b<<endl;
    
    
    a=5;
    b=6;
    cout<<"\nBefore swap: "<<a<<" "<<b<<endl;
    swap_poautoer(&a, &b);
    cout<<"After swap by call by poautoer in main: "<<a<<" "<<b<<endl;
    
    return 0;
}
