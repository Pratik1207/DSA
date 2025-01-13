#include<iostream>
using namespace std;

void perimeter(int a, int b, int c)
{
    int p = a+b+c;
    cout<<"Perimeter is "<<p<<endl;
}

int main()
{
    int a,b,c;
    cout<<"Enter the sides of the trinagle to find its side"<<endl;
    cin>>a>>b>>c;
    perimeter(a,b,c);
    return 0;
}