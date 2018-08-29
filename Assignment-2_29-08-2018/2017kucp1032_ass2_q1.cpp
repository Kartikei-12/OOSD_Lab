//Date: 29 August 2018
//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Assignment-2 Question 1 Part-1

#include<iostream>

//Solution using Constructor
class Test
{
private:
    static int objCount;
    int dataMember;

public:
    Test(int a=0)
    {
        dataMember = a;
        ++objCount;
    }

    void get_data(void)
    {
        std::cout<<"Enter data member: ";
        std::cin>>dataMember;
    }
    void show_data(void) {
        std::cout<<"Data: "<<dataMember<<std::endl;
    }

    static void displayCount(void) {
        std::cout<<"Object Count: "<<objCount<<std::endl;
    }
};
int Test::objCount = 0;

int main(int argc, char const *argv[])
{
    //Creating single object
    Test case1;
    case1.get_data();
    case1.show_data();
    Test::displayCount();
    std::cout<<"\n\n\n";
    
    //Creating four new objects
    Test fourCases[4];
    for(int i=0; i<4; ++i)
    {
        fourCases[i].get_data();
        fourCases[i].show_data();
    }
    Test::displayCount();
    return 0;
}
