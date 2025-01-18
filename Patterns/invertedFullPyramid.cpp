#include<iostream>
using namespace std;

void invertedFullPyramid(int n)
{
    for(int row=0; row<n; row++)
    {
        for(int space = 0; space<row; space++)
        {
            cout<<" ";
        }
        for(int star=0; star<n-row; star++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}

int main()
{
    invertedFullPyramid(6);
    return 0;
}