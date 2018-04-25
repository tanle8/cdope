#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 4> arr = {1, 2, 3, 4};
    cout << "The array is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr.fill(2);
    
    cout << "After using fill(): ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}