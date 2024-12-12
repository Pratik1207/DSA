#include<iostream>
using namespace std;


void halfPyramid(int n)
{
    for (int row = 0; row<n; row++)
    {
        for(int col=0; col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
    halfPyramid(6);
    return 0;
}