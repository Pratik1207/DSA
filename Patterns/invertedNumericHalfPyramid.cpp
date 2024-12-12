#include<iostream>
using namespace std;

void invertedNumericHalfPyramid(int n )
{
    for(int row = 0; row <= n; row++)
    {
        for(int col=1; col<=n-row; col++)
        {
            cout<<col;
        }
        cout<<endl;
    }
}


int main()
{
    invertedNumericHalfPyramid(6);
    return 0;
}