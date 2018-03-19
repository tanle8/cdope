#include <iostream>

using namespace std;

inline int exp(int x, int y, int z)
{
	return (x + y) * z;
}

int main()
{
	cout << exp (4, 5, 7) << endl;
	cout << exp (4, 5, 6) << endl;
	cout << exp (4, 7, 5) << endl;
	cout << exp (7, 4, 6) << endl;

	return 0;
}
