/* Write a program to print the address of a variable whose value is input from user.
*/

#include <iostream>

using namespace std;

int main () {
	int a;
	cout << "Enter an integer" << endl;
	cin >> a;
	cout << "the address of the input integer in memory is: " << &a << endl;

	return 0;
}
