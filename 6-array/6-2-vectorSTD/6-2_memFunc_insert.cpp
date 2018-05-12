#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void printVector( const std::vector<int> &n)
{
    cout << "Vector is: " << endl;

    for (auto i: n)
    {
        std::cout << ' ' << i;
    }
    std::cout << '\n';

}

int main()
{
    vector<int> v = {111, 222};
    printVector(v);

    auto it = v.begin();

    v.insert

    return 0;
}