#include <iostream>

using namespace std;

void swap ( int *a, int *b )
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main () {
	int num1, num2;
	cout << "Enter first number" << endl;
	cin >> num1;
	cout << "Enter second number" << endl;
	cin >> num2;

	swap (&num1, &num2 );

	cout << "First number = " << num1 << endl;
	cout << "Second number = " << num2 << endl;

	return 0;
}
