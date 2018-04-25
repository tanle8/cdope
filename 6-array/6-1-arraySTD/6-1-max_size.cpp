#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 8> arr;
    cout << "The max size of array is: " << arr.max_size() << endl;
    cout << "The size of array is: " << arr.size() << endl;

    return 0;
}