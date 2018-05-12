#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {4,5,6,7,8};
    v.push_back(47);

    //printing the value of vector v
    cout << "element of v:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}