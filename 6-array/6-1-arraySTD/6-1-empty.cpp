#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 2> a1 = {1, 2};
    array<int, 0> a2;
    cout << "Array 1 is empty: " << a1.empty() << endl;
    cout << "Array 2 is empty: " << a2.empty() << endl;

    return 0;
}