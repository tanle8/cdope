#include <iostream>

int main() {
	using namespace std;
	
	int n[10];	// declaring n as an array of 10 integers
	int i,j;
	
	// Initializing elements of array n
	for ( i = 0; i < 10; i++ )
	{
		cout << "Enter value of n[" << i << "]" << endl;
		cin >> n[i];
	}

	// Printing the values of elements of array
	for (j = 0; j < 10; j++ )
	{
		cout << "n[" << j << "] = " << n[j] << endl;
	}

	return 0;
}
