/* 5.
* Write a function which will take pointer and display the number on screen.
* Take number from user and print it on screen using that function.
*/

#include <iostream>

using namespace std;

void displayNum( int *num )
{
    cout << "You entered: " << *num << endl;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    displayNum(&number);

    return 0;
}