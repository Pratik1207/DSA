#include<iostream>
using namespace std;

void solidRectangle()
{
    for(int row = 0; row<4; row++)
    {
        for(int col = 0; col < 6; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    solidRectangle();
    return 0;
}