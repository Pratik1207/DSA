#include<iostream>
using namespace std;


int factorial(int n)
{
    if (n < 0) {
       cout << "Factorial of a negative number is not defined." << endl;
       return -1;  // Return an error code for invalid input
    }
    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    cout<<"Enter a number to find its factorial"<<endl;
    cin>>n;
    int result = factorial(n);
    cout<<result<<endl;
    return 0;
}