#include<iostream>
using namespace std;

void fullPyramid(int n)
{
    for(int row = 0; row < n; row++)
    {
        // Print spaces
        for(int space = 0; space < n - row - 1; space++)
        {
            cout << " ";
        }

        // Print stars
        for(int star = 0; star <= row ; star++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{
    fullPyramid(6);
    return 0;
}
