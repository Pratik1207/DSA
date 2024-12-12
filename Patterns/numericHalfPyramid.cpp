#include<iostream>
using namespace std;

void numericHalfPyramid(int n )
{
    for(int row = 1; row <= n; row++)
    {
        for(int col=1; col<=row; col++)
        {
            cout<<col;
        }
        cout<<endl;
    }
}


int main()
{
    numericHalfPyramid(6);
    return 0;
}