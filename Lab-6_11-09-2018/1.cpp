//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Date: 11-September-2018
//Input/Output methods

#include<iostream>
    using namespace std;

int main(int argc, char const *argv[])
{
    char s1[15], s2[15];
    cin.getline(s1, 10);
    cout<<s1<<":First\n";
    cin.get(s2, 10, ' ');
    cout<<s1<<":Second"<<endl<<"Cout Methods:";
    char s3[] = "Kartikei Mittal\n2017KUCP1032";
    for(int i=0; i<29; ++i)
        cout.put(s3[i]);
    return 0;
}
