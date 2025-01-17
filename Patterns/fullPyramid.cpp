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

void fullPyramidEfficientMethod(int n)
{
    for(int i =0; i<n; i++)
    {
                    int k =0;
        for(int j=0; j<((2*n)-1); j++)
        {

            if(j<n-i-1)
            {
                cout<<" ";
            }
            else if(k<((2*i)+1))
            {
                cout<<"*";
                k++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    // fullPyramid(4);
    fullPyramidEfficientMethod(6);
    return 0;
}
