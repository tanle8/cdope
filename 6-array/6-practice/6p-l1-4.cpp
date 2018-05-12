/* 4.
Take 10 integer inputs from user and store them in an array. 
Now, copy all the elements in another array but in reverse order.

Using Iterator
*/

#include <iostream>
#include <vector>

using namespace std;

std::vector<int> reverseCopyArray(std::vector<int> &n)
{

}

void printVector(const std::vector<int> &n)
{
    cout << "Vector is: " << endl;

    for (auto i: n)
    {
        std::cout << ' ' << i;
    }
    std::cout << '\n';
}

int main()
{
    vector<int> inputArray;
    int iInput;
    
    cout << "Enter 10 integer: " << endl;
    // Read input from user to vector
    for (int i = 0; i < 10; i++)
    {
        cin >> iInput;
        inputArray.push_back(iInput);
    }

    printVector(inputArray);


    return 0;
}
