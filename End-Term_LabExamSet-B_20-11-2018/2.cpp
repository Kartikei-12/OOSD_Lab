#include<iostream>
#include<fstream>
    using namespace std;

int main(int argc, char const *argv[])
{
    int a=0;
    ifstream in("test.txt");
    ofstream ANS1("div3.txt", ios::trunc);
    ofstream ANS2("divNot3.txt", ios::trunc);
    while(!in.eof())
    {
        in>>a;
        if(!(a%3))
            ANS1<<a<<" ";
        else
            ANS2<<a<<" ";
    }
    cout<<"Done"<<endl;
    return 0;
}
