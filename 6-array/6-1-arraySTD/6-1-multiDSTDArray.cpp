#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<array<int, 3>, 3> a  {{{1,2,3},{4,5,6},{7,8,9}}};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}