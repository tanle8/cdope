#include <iostream>

using namespace std;

int main () {
	float marks[3][2];
	int i, j;
	for ( i = 0; i < 3; i++ )
	{
		// Input of marks from the user
		cout << "Enter marks of student " << (i + 1) << endl;
		for ( j = 0; j < 2; j++ )
		{
			cout << "Subject " << (j + 1) << endl;
			cin >> marks[i][j];
		}
	}
	// Printing the marks of students
	for ( i = 0; i < 3; i++ )
	{
		cout << "Marks of student " << (i + 1) << endl;
		for ( j = 0; j < 2; j ++)
		{
		cout << "Subject " << (j + 1) << " : " << marks[i][j] << endl;
		}
	}
	
	return 0;
}
