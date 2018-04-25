#include <iostream>
#include <vector>

using namespace std;

void printVector(const std::vector<int> &n)
{
    for (int j = 0; j < n.size(); j++)
    {
        cout << "n[" << j << "] = " << n[j] << endl;
    }
}

int main()
{
    vector<int> n = {1,2,3,4,5};

    printVector(n);

    return 0;
}