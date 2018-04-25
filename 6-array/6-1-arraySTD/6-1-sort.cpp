#include <iostream>
#include <array>
#include <iterator>
#include <algorithm> // for sort algorithm

// using namespace std;

int main()
{
    std::array<int, 4> a = {47, 23, 90, 1};

    std::cout << "Array before sort: " << std::endl;
    for (auto i = a.begin(); i != a.end(); ++i)
    {
        std::cout << *i << std::endl;
    }

    std::sort( a.begin(), a.end() );

    std::cout << "Array after sort: " << std::endl;
    for (auto i = a.begin(); i != a.end(); ++i)
    {
        std::cout << *i << std::endl;
    }

    return 0;
}