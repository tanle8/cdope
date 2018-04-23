/* 2. Take 10 integer inputs from user and store them in an array.
* Again ask user to give a number. Now, tell user whether that 
* number is present in array or not.
*/

#include <iostream>

using namespace std;

int main()
{
    int n[10];
    int num_check;

    cout << "Enter 10 integers: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> n[i];
    }

    cout << "Enter the number to check whether it's existed in the array or not" << endl;
    cin >> num_check;

    for (int i = 0; i < 10; i++)
    {
        if(num_check == n[i])
        {
            cout << "It's already here in n[" << i << "] " << endl; 
        }
    }

    return 0;
}