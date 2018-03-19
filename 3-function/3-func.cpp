#include <iostream>

using namespace std;

float average(int num1, int num2)
{
        float avg;      // declaring local variable
        avg = (num1 + num2) / 2.0;
        return avg;
}

void display (int n)
{
	cout << "Number is: " << n << endl;
}


int main(){
	int num1, num2, n;
	float c;
	cout << "Enter the first number" << endl;
	cin >> num1;
	cout << "Enter the second number" << endl;
	cin >> num2;
	cout << "Enter number" << endl;
	cin >> n;
	display(n);	// Calling the function display
	
	c = average (num1, num2);	// Calling the function average.
	cout << "Average is: " << c << endl;
	return 0;
}

