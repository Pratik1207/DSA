#include<iostream>
using namespace std;

void fullPyramid(int n)
{
    for(int row = 0; row<n; row++)
    {
        for(int col =0; col< n- row-1; col++)
        {
            cout<<"   ";
        }
        for(int star = 1; star <= row +1; star++)
        {
            cout<<" * ";
        }
        for(int i=0; i<row; i++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}

int main()
{
    fullPyramid(6);
    return 0;
}
