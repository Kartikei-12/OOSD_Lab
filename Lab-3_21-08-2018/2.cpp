//Example of local and global variable
#include<iostream>
    using namespace std;
int g=10;
int main()
{
    int g=20;
    cout<<"\nGlobal: "<<::g<<"\nLocal: "<<g;
    return 0;
}