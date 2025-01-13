#include<iostream>
using namespace std;


bool checkValidTriangle(int a, int b, int c)
{
    if( (a+b) > c && (b+c) > a && (a+c) > b )
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int a,b,c;
    cout<<"Enter the sides of the triangle to see if it is a valid Triangle or not??\n";
    cin>>a>>b>>c;
    bool result = checkValidTriangle(a,b,c);
    if(result == 1)
    {
        cout<<"valid Triangle \n";
    }
    else{
        cout<<"Not valid Triangle \n";
    }
    return 0;
}