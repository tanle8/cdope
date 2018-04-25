#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1 = {1,2,3,4,5};
    cout << v1.size() << endl;
    cout << v1.max_size() << endl;

    return 0;
}