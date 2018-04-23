/* 1. Take 10 integer inputs from user and store them in an array
* and print them on screen.
*/

#include <iostream>

using namespace std;

void display (int *p)
{
    for (int i = 0; i < 10; i++)
    {
        cout << "n[" << i << "] = " << *p << endl;
        p++;
    }
}

int main()
{
    int n[10];
    cout << "Enter 10 integer: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> n[i];
    }

    display (n);

    return 0;
}

