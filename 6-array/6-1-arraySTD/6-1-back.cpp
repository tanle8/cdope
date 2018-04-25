#include <iostream>
#include <array>

using namespace std;

int main()
{
    array <char, 6> ch = {'a', 'b', 'c', 'd', 'e', 'f'};
    cout << "The last element of the array is: " << ch.back() << endl;

    return 0;
}