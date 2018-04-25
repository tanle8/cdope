#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1 = {5, 6};
    vector<int> v2; // an empty vector, without initialization.
    cout << v1.empty() << endl;
    cout << v2.empty() << endl;

    return 0;
}