#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1 = {5,6};
    v1.resize(5);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }

    return 0;
}