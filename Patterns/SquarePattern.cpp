#include<iostream>
using namespace std;

void solidRectangle(int n)
{
    for(int row = 0; row<n; row++)
    {
        for(int col = 0; col < n; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    solidRectangle(7);
    return 0;
}