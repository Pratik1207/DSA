#include<iostream>
using namespace std;

void simpleIntrest(float p, float r, float t)
{
    float sI = (p*r*t)/100;
    cout<<"Simple intrest is "<<sI<<endl;
}

int main()
{
    float p,r,t;
    cin>>p>>r>>t;
    simpleIntrest(p,r,t);
    return 0;
}