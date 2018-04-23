/* 2. Write a program to reverse the digits of a number using pointers.
* Note: this method below is a mathematical approach, you can use other
* trick to perform this task.
*/

#include <iostream>

using namespace std;

unsigned int reverseNumber(unsigned int *pointer)
{
    unsigned int number = *pointer;
    unsigned int reversed_number = 0;

    
    while (number > 0)
    {
        reversed_number = reversed_number*10 + number%10;
        number = number / 10;
    }

    cout << "Reversed number of " << *pointer << " is " << reversed_number << endl;
}

int main()
{
    unsigned int number;

    cout << "Enter a positive number:";
    cin >> number;

    reverseNumber( &number );

    cout << "//----------------INSIGHT----------------//" << endl;
    cout << "The memory address of your input number: " << &number << endl;
    

    return 0;
}
