#include <iostream>

using namespace std;

float average ( float a[])
{
	int i;
	float avg, sum = 0;
	for (i = 0; i < 8; ++i )
	{
		sum += a[i];	// Is equal to sum = sum + a[i]
	}
	avg = sum / 8;
	return avg;
}

int main()
{
	float b, n[] = {20.6, 30.8, 5.1, 67.2, 23, 2.9, 4, 8};
	b = average(n);
	std::cout << "Average of numbers = " << b << std::endl;
	return 0;
}
