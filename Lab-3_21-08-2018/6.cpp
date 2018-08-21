//Classroom assignment
#include<iostream>
#include<string>
    using namespace std;
#define Default_Clearance 0
class Federal_Agent
{
    string name, id;
    int clearance;
public:
    Federal_Agent() { ;}
    Federal_Agent(string a, string b)
    {
        name = a;
        id = b;
        clearance = Default_Clearance;
    }
    void getAgent()
    {
        cout<<"\nEnter name: ";
        getline(cin, name);
        cout<<"\nEnter id: ";
        cin>>id;
        cout<<"\nEnter clearance level:";
        cin>>clearance;
    }
    void showAgent()
    {
        cout<<"\nName: "<<name<<endl
            <<"Id: "<<id<<endl
            <<"Clearance: "<<clearance;
    }
    void pramoteAgent(int a=1)
    {
        clearance += a;
    }
    void terminateAgent()
    {
        id = "";
        clearance = Default_Clearance;
    }
};

int main()
{
    Federal_Agent A("Shashwat Singh", "1054");
    A.showAgent();
    A.pramoteAgent(5);
    A.showAgent();
    A.terminateAgent();
    A.showAgent();
    return 0;
}