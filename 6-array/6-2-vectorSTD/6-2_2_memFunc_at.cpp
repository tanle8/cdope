#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> marks = {50, 45, 47, 65, 80};
    marks.at(2) = 74;

    for ( int i = 0; i < marks.size(); i++)
    {
        cout << "marks[" << i << "] = " << marks.at(i) << endl;
    }

    return 0;
}