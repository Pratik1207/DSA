#include<iostream>
using namespace std;

void invertedHalfPyramid(int n)
{
    for(int row=0; row<=n; row++)
    {
        for(int col=n; col>=row; col--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    invertedHalfPyramid(6);
    return 0;
}