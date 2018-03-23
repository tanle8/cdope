#include <iostream>

using namespace std;

int main() {
	float n[5] = { 20.4, 30.0, 5.8, 67, 15.2 };	// Declaring n as an array of 5 floats
	float *p;	// p as a pointer to float
	int i;
	p = n;		// p now points to array n
	// Printing the values of elements of array
	for (i = 0; i < 5; i++)
	{
		cout << "*(p + " << i << ") = " << *(p + i) << endl;
	}
	// Printing the address of array
	cout << "Address of array n = \t" << p << endl;
	// Printing the addresses of elements of array
	for ( i = 0; i < 4; i++ )
	{
		cout << "Address of n[" << i << "] = \t" << &n[i] << endl;
	}
	
	return 0;
}
