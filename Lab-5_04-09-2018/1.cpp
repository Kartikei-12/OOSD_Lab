//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Date: 04-September-2018
//Matrix transpose

#include<iostream>
#include<iomanip>
    using namespace std;

#define maxSize 20
#define twoDimenLoop(x, y) for(int i=0; i<x; ++i)for(int j=0; j<y; ++j)

class Matrix
{
private:
    int si;
    double A[maxSize][maxSize];
public:
    //Counstructor
    Matrix()
    {
        si = maxSize;
        twoDimenLoop(si, si)
            A[i][j] = 0.0;
    }

    //Input
    void getMatrix()
    {
        cout<<"Enter size of matrix(max "<<maxSize<<"):";
        cin>>si;
        twoDimenLoop(si, si)
        {
            cout<<"Enter "<<i<<" "<<j<<" :";
            cin>>A[i][j];
        }
    }

    //Output
    void putMatrix()
    {
        for(int i=0; i<si; ++i)
        {
            for(int j=0; j<si; ++j)    
                cout<<setw(2)<<A[i][j]<<" ";
            cout<<endl;
        }
    }

    //Method to generate and return transpose
    Matrix transpose()
    {
        Matrix ans;
        ans.si = si;
        twoDimenLoop(si, si)
            ans.A[i][j] = A[j][i];
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    Matrix M1;
    M1.getMatrix();
    cout<<"Original Matrix:"<<endl;
    M1.putMatrix();
    cout<<"Transpose Matrix:"<<endl;
    M1.transpose().putMatrix();
    
    return 0;
}
