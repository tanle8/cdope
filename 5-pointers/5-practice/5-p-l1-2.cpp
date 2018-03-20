/* Write a program to print the address of the pointer which pointed to a variable whose value is input from user.
*/

#include <iostream>

using namespace std;

int main () {
	int a;
	int *p;	// declaring a pointer `p` which will point to an integer variable..
	cout << "Enter a number" << endl;
	cin >> a;
	
	p = &a;
	cout << "Address of the pointer `p` is: \n" << &p << endl;
	cout << "While the address of variable `a` is: \n" << &a << endl;
	cout << "It's also the value which p store: \n" << p << endl;

	return 0;
	 
}
