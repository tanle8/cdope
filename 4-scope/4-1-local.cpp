#include <iostream>

using namespace std;

int multiply (int a, int b){
	return a * b;
}

int main () {
	int x = 3, y = 5;
	int z;
	z = multiply( x, y);
	cout << z << endl;
	return 0;
}

