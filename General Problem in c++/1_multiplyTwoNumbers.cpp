#include<iostream>
using namespace std;


void multiply(int a, int b)
{
    int c=a*b;
    cout<<"Product is "<<c<<endl;
}
int main()
{
    int a; int b;
    cout<<"Enter two numbers to find its product"<<endl;
    cin>>a;
    cin>>b;
    multiply(a,b);
    return 0;
}