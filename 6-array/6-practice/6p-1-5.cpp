/* 5. Write a program to find the sum and product of all elements of an array.
*/

#include <iostream>
#include <vector>

using namespace std;

float sumOf(const std::vector<float> &n)
{
    float sum = 0; // declare and initialize a variable to store sum.

    // Iterate through all elements and add them to sum
    for (int i = 0; i < n.size(); i++)
    {
        sum += n[i];
    }

    return sum;
}

float productOf(const std::vector<float> &n)
{
    float product;
    // Iterate through all elements and multiply them
    for (int i = 0; i < n.size(); i++)
    {
        product *= n[i];
    }

    return product;
}

int main()
{
    std::vector<float> a = {1,2,3,4,5,6,7,8,9,10};

    float s, p = 0;

    s = sumOf(a);
    p = productOf(a);

    cout << s << endl;
    cout << p << endl;

    return 0;
}
