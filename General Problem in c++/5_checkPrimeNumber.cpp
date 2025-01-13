#include<iostream>
using namespace std;

bool checkPrime(int n)
{
     if (n <= 1) {
        return false; 
    }
    for(int i=2; i<n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;

}


int main()
{
    int n;
    cout<<"Enter the number to check primr\n";
    cin>>n;
    bool result = checkPrime(n);
   if(result == 1)
   {
    cout<<"Prime Number\n";
   }
   else{
    cout<<"Not Prime Number\n";
   }
    return 0;
}