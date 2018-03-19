 We use **inline functions** are not necessary, but we use them to make our program faster.

Normally, when we call a function, the function first gets called and then its body gets executed. It takes comparatively more time to call a function than to write code in the program in place of that function call.

When we declare a fuunction as inline and when this function is called in the main class, the compiler replaces this function call with the code in the body of the inline function.

"""C++
#include <iostream>

using namespace std;

inline int exp(int x, int y, int z)
{
	return (x+ y) * z;
}

int main()
{
	cout << exp(2, 3, 4) << endl;

	return 0;
}
"""
