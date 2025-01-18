#include<iostream>
using namespace std;


void solidDiamond(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        for(int star =0; star <=i; star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row =0; row<n; row++)
    {
        for(int space = 0; space<row; space++)
        {
            cout<<" ";
        }
        for(int star=0; star<n-row; star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}


int main()
{
    solidDiamond(6);
    return 0;
}