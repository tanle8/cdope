#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<double, 4> arr = {5.6, 4.5, 4.7, 3.2};
    cout << "The first element of the array: " << arr.front() << endl;

    return 0;
}