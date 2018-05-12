#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;

    for (int i = 0; i < 50; i++)
    {
        v1.push_back(1);
    }

    v1.reserve(100);
    cout << "Capacity: " << v1.capacity() << endl;

    return 0;
}