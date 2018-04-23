/* 1. Write a program to find the factorial of a number using pointers.
*/

#include <iostream>

using namespace std;

void fact( unsigned int *p)
{
    unsigned long long factorial = 1;
    
    for (int i = 1; i <= *p; ++i)
    {
        factorial *= i;
    }

    cout << "Factorial of " << *p << " = " << factorial << endl;
}

int main()
{
    unsigned int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    fact(&n);

    return 0;
}



