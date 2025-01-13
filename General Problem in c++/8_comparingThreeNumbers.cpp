#include<iostream>
using namespace std;

void compare(int a, int b, int c)
{
    if( a >= b && a >= c)
    {
        cout<<a<<endl;
    }
    else{
        if( b >= c)
        {
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
}


int main()
{
    int a,b,c;
    cout<<"Enter three numbers to compare \n";
    cin>>a>>b>>c;
    compare(a,b,c);
    return 0;
}