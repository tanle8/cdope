/* 6. Initialize and print all elements of a 2D array.
*/

#include <iostream>
#include <vector>

using namespace std;

void printVector(const std::vector<std::vector<int>> &n)
{
    for (int i=0; i<n.size(); i++)
    {
        for (int j=0; j< n[i].size(); j++)
        {
            cout << n[i][j] << "\t";
        }

        cout << endl;
    }
}

int main()
{
    std::vector<vector<int>> v {{{1,2,3}, {4,5,6}, {7,8,9}}};
    printVector(v);

    return 0;
}