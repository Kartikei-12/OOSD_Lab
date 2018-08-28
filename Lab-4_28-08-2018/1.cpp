//Author: Kartikei Mittal
//ID: 2017KUCP1032
//friend function

#include<iostream>
    using namespace std;

class myClass
{
private:
    int privateMem;
public:
    int publicMem;

    myClass() {; }
    myClass(int t1, int t2): privateMem(t1), publicMem(t2) {; }

    friend void swap_privateMem_publicMem(myClass& );
    friend void friend_show();

    void show() const {
        cout<<"From member function: "<<privateMem<<" "<<publicMem<<endl;
    }
};

void swap_privateMem_publicMem(myClass& obj2)
{
    int temp = obj2.privateMem;
    //             ^ accessing private member
    obj2.privateMem = obj2.publicMem;
    obj2.publicMem = temp;
    cout<<"\nFrom show_privateMem_publicMem:"<<endl;
    obj2.show();
}

void friend_show()
{
    myClass obj2(5, 8);
    cout<<"From friend function: "<<obj2.privateMem<<" "<<obj2.publicMem<<endl;
    //                                  ^ accessing private member
}

int main(int argc, char const *argv[])
{
    myClass obj1(2, 3);
    swap_privateMem_publicMem(obj1);
    cout<<"\nFrom main(using reference):"<<endl;
    obj1.show();
    friend_show();
    return 0;
}
