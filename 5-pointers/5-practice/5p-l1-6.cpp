/* 6.
* Write a program to find out the greatest and the smallest 
* among three numbers using pointers.
*/

#include <iostream>

using namespace std;

void compareNum(double *n1, double *n2, double *n3)
{
    if (*n1 > *n2 && *n1 > *n3) {
        cout << *n1 <<" is the largest and ";
        if (*n2 > *n3) {
            cout << *n3 << " is the smallest among three numbers" << endl;
        } else {
            cout << *n2 << " is the smallest among three numbers" << endl;
        }

    } else if (*n2 > *n1 && *n2 > *n3) {
        cout << *n2 << " is the largest and ";
        if (*n1 > *n3) {
            cout << *n3 << " is the smallest among three numbers" << endl;
        } else {
            cout << *n1 << " is the smallest among three numbers" << endl;
        }
        
    } else {
        cout << *n3 << " is the largest and ";
        if (*n1 > *n2) {
            cout << *n2 << " is the smallest among three numbers" << endl;
        } else {
            cout << *n1 << " is the smallest among three numbers" << endl;
        }
    }

}

int main()
{
    double n1, n2, n3;
    cout << "Enter three numbers you want to compare:" << endl;
    cin >> n1 >> n2 >> n3;
    cout << "Three numbers are: " << n1 << " " << n2 << " " << n3 << endl;

    compareNum(&n1, &n2, &n3);


    return 0;
}