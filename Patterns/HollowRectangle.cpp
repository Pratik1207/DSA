#include<iostream>
using namespace std;

void HollowRectangle()
{
    for(int row = 0; row<6; row++)
    {
        if(row == 0 || row == 5)
        {
            for(int col = 0; col<4; col++)
            {
                cout<<"* ";
            }
        }
        else
        {
            cout<<"* ";
            for(int i=0; i<2; i++)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    HollowRectangle();
    return 0;
}