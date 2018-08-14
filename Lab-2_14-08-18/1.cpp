//First program 
//Date: 14 August 2018
//Author: Kartikei Mittals
#include<iostream>

#define sum(x,y) x+y

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
    std::cout<<"\nASD"<<sum(1, 2);
    return 0;
}