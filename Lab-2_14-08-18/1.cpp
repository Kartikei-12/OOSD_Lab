//First program 
//Date: 14 August 2018
//Author: Kartikei Mittal
#include<iostream>

namespace my_namespace
{   
    inline void swap(auto &a, auto &b)
    {
        auto c=a;
        a=b;
        b=c;
    }
}

int main(int argc, char* argv[])
{
    std::cout<<"\nHello World!\n";
    int a=5, b=2;
    std::cout<<"\nBefore swap:"<<a<<" "<<b;
    my_namespace::swap(a, b);
    std::cout<<"\nAfter swap:"<<a<<" "<<b;
    std::string e="Hello", f="World!";
    std::cout<<"\nBefore swap:"<<e<<" "<<f;
    my_namespace::swap(e, f);
    std::cout<<"\nAfter swap:"<<e<<" "<<f;
    return 0;
}