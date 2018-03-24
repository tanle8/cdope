/* We can also pass an array to a function using pointers.
* In this example, the address of the array i.e. address of n[0] is passed to the 
* formal parameters of the function.
* `void display (int *p) - this means that the function `display` is taking a pointer 
* of an integer and not returning any value.
* Now, we passed the pointer of an integer i.e., pointer of array n[] - `n` as per the demand
* of our function `display`.
* Since p is the address of the array n[] in the function `display`, i.e., the address of the 
* first element of the array(n[0]), therefore *p represents the value of n[0].
* In the for loop in the function, p++ increases the value of p by 1. So when i = 0,
* the value of *p gets printed. Then p++ increases *p to *(p+1) and thus in the second loop,
* the value of *(p+1) i.e. n[1] gets printed. This loop continues till i = 7 when the value of *(p+7) i.e.* n[7] get printed.
*/

#include <iostream>

using namespace std;

void display (int *p)
{
	int i;
	for (i = 0; i < 8; ++i )
	{
		cout << "n[" << i << "] = " << *p << endl;
		p++;
	}
}

int main() {
	int size, j;
	int n[] = {1, 2, 3, 4, 5, 6, 7, 8};
	display (n);
	return 0;
}

