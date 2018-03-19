#include <iostream>

using namespace std;

int factorial (int a )
{
	if ( a == 0 || a == 1 )
	{
		return 1;
	}
	else 
	{
		return a * factorial ( a -1 );
	}
}

int main () {
	int n;

	cout << "Enter number" << endl;
	cin >> n;
	
	int fact = factorial ( n );
	
	cout << "Factorial of " << n << " is " << fact << endl;
	
	return 0;
}
