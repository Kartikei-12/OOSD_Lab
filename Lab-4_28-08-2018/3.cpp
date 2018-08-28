//Author: Kartikei Mittal
//ID: 2017KUCP1032
//return by reference

#include<iostream>
    using namespace std;

int num;

int& fun() {
    return num;
}

int main(int argc, char const *argv[])
{
    fun() = 5;
    cout<<num;
    return 0;
}
