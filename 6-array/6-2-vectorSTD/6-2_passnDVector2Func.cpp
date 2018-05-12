#include <iostream>
#include <vector>

using namespace std;

void display( const std::vector<std::vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    // Declare and Initialize a 3 dimensional vector
    vector<vector<int>> v {{{1,2,3},
                            {4,5,6},
                            {7,8,9}}};

    display(v);

    return 0;
}