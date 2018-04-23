# Array

Array means collection. In C++ also, an array is a collection of similar types of data.
e.g. An array of `int` will contain only integers, an array of `double` will contain only doubles.

## Why array?

Suppose we need to store the marks of 50 students in a class and calculat ethe average marks. Declaring 50 separate variables will do the job but no programmer would like to do so> And here comes the **array** in action.

## How to declare an array

```sh
<datatype> <array_name> [ <array_size> ];
```

For example, take an integer array `n`:
`int n[6];`

## Initializing an array

By writing __int n[] = {2, 4, 8};__, we are initializing the array.

But when we declare an array like __int n[3];__, we need to assign the values to it separately. Because 'int n[3];' will definitely allocate the space of 3 integers in the memory but there are no integers in that.

To assign values to the array, assign a value to each of the element of the array.

```c++
n[0] = 2;
n[1] = 4;
n[2] = 8;
```
It is just like we are declaring some variables and then assigning the values to them.

```c++
int x, y, z;
x = 2;
y = 4;
z = 8;
```

Thus, the two ways of initializing an array are:

	int n [] = {2, 4, 8};

and the second method is declaring the array first and then assigning the values to its elements.

You can understand this by treating n[0], n[1], n[2] as different variables you used before.

Just like a variable, an array can be of any other data type also.

	float f[] = {1.1, 1.4, 1.5};

Here, f is an array of floats.

First, let's see the example to calculate the average of the marks of 3 students. Here, marks[0], marks[1], marks[2] represent the marks of the first, second and third student respectively.

```c++
#include <iostream>

int main()
{
	using namespace std;

	int marks[3];
	float average;
	cout << "Enter marks of first student" << endl;
	cin >> marks[0];
	cout << "Enter marks of second student" << endl;
	cin >> marks[1];
	cout << "Enter marks of third student" << endl;
	cin >> marks[2];

	average = (marks[0] + marks[1] + marks[2])/ 3.0;
	cout << "Average marks: " << average << endl;

	return 0;
}
```

Here, you have seen a working example of array. We treated the array in the exact similar way as we hasd treated normal variables.

> In the above example, two points should be kept in mind. The average value should be of type 'float' because the average of integers can be float also.
> Secondly, while taking out the average, sum of the numbers should be divided by 3.0 and not 3, otherwise, you will get the average value as integer and not float.

We can also use for loop as in the next example:

```c++
#include <iostream>

int main()
{
	using namespace std;

	int n[10]; //declaring n as an array of 10 integers
	int i,j;
	
	// Initializing elements of array n
	for (i = 0; i < 10; i++)
	{
		cout << "Enter value of n[" << i << "]" << endl;
		cin >> n[i];
	}

	// printing the value of elements of array
	for (j = 0; j < 10; j++)
	{
		cout << "n[" << j << "] = " << n[j] << endl;
	}

	return 0;
}
```

The above code was just to make you familiar with using loops with an array because you will be doing this many times later.

The code is simple, __i__ and __j__ starts from 0 because index of an array starts from 0 and goes up to 9 (for 10 elements). So, i and j goes up to 9 and not 10 (i < 10 and j < 10). So in the above code, __n[i]__ will be n[0], n[1], ... , n[9].

There are two for loops in the above example. In the first for loop, we are taking the values of the different elements of the array from the user one by one. In the second for loop, we are printing the values of the elements of the array.

Let's go to the first for loop. In the first iteration, the value of i is 0, so _n[i]_ is `n[0]`. Thus by writing `cin >> n[i];`, the user will be asked to enter the value of n[0]. Similary in the second iteration, the value of 'i' will be '1' and 'n[i]' will be 'n[1];'. So `cin >> n[i];' will be used to input the value from the user for n[1] and so on. 'i' will go up to 9, and so indices of the array (0, 1, ...  , 9).

> Array allocates contiguos memory. Thus if the address of the first element of an array of integers is __X__ then the address of the second element will be __X+4__ (4 is the size of one integer) and third will be __X+4+4__ and so on. This means that the memories of all elements of an array are allocated together and are continuos.

## Pointer to Arrays

As we all know that pointer is a variable whose value is the address of some other variable i.e., if a varible __y__ points to another variable __x__ means that the __value of y__ is the __address of x__.

Similarly, if we say that a variable `y` __points to an array__ `n`, then it means that the value of `y` is the __address of the first element of the array__ i.e., n[0]. So, y is the pointer to the array n.

> Array name is a pointer to the first element of the array.

If *p* is a pointer to the array **age**, then it means that *p* points to **age[0]**.

```c++
int age[50];
int *p;
p = age;
```

The above code assigns the address of the first element of age of *p*.
Now, since *p* points to the first element of the array **age**, `*p` is the value of the first element of the array.
refers
> Since `*p`  to the first array element, `*(p+1)` and `*(p+2)` refers to the second and third elements respectively and so on.

So, *p is age[0], *(p+1) is age[1], *(p+2) is age[2].

Similarly, *age is age[0] (value at age), *(age+1) is age[1] (value at age+1), *(age+2) is age[2] (value at age+2) and so on.

That's all in pointer to arrays.

Now let's see some examples.

```c++
#include <iostream>

using namespace std;

int main()
{
	float n[5] = {20.4, 30.0, 5.8, 67, 15.2 }; // declaring n is an array of 5 floats
	float *p;	// p is a pointer to float
	int i;
	p = n;	// p now points to array n
	//Printing the values of elements of array
	for (i = 0; i < 5; i++)
	{
		cout << "*(p + " << i << ") = " << *(p+i) << endl;	// *(p+i) means value at (p+0), (p+1), ...
	}

	return 0;
}
```

Since __p__ is pointing to the first element of array, so, __*p__ or __*(p+0)__ represent the value at p[0] or the value at the first element of p.
Similarly, *(p+1) represents value at __p[1]__. So __*(p+3)__ and __*(p+4)__ represent the values at __p[3]__ and __p[4]__ respectively. So, accordingly,we will get the output.

The above example sums up the above concepts. Now, let's print the address of the array and also individual elements of the array.

```c++
#include <iostream>

using namespace std;

int main()
{
	int n[4] = { 20, 30, 5, 67 }; // declaring n as an array of 4 integers
	int *p;	// declaring a pointer which point to integer
	int i;
	p = n;	// p is pointing to array n

	// printing the address of array
	cout << "Address of array n = " << p << endl;	// *p points to array means store address of first element of array
	// Printing the addresses of elements of array
	for (i = 0; i < 4; i++)
	{
		cout << "Address of n[" << i << "] = " << &n[i] << endl;
	}

	return 0;
}
```
In the above example, we saw that the address of the first element of n and p is the same. We also printed the values of other elements of the array by using (p+1), (p+2) and (p+3).

## Passing the whole Array in Function

In c++, we can pass an element of an array or the full array as an argument to a function.

Let's first pass a single array element to a function.

```c++
#include <iostream>

using namespace std;

void display (int a)
{
	cout << a << endl;
}

int main()
{
	int n[] = {20, 30, 23, 4, 5, 2, 41, 8};
	display(n[2]);
	return 0;
}
```

### Passing an entire Array in a Function

We can also pass a whole array to a function by passing the array name as argument. Yes, the trick is that we will pass the address of array, that is the address of the first element of the array. Thus, by having the pointer of the first element, we can get the entire array as we have done in the above examples.

```c++
#include <iostream>

float average(float a[])
{
	int i;
	float avg, sum = 0;
	for (i = 0; i < 8; i++)
	{
		sum += a[i];
	}
	avg = sum/8;

	return avg;
}

int main(){
	float b, n[] = {20.6, 30.8, 5.1, 67.2, 23, 2.9, 4, 8}
	b = average(n);
	cout << "Average of numbers = " << b << endl;

	return 0;
}
```

- __average(float a[])__ - It is the function that is taking an array of float. And rest of the body of the function is performing accordingly.

- __b = average(n)__ - One thing you should note here is that we passed __n__. And as discussed earlier, n is the pointer to the first element or pointer to the array __n[]__. So, we have actually passed the pointer.

In the above example in which we calcualted the average of the values of the elements of an array, we already knew the size of the array i.e., 8.

Suppose, we are taking the size of the array from the user. In that case, the size of the array is not fixed. Here, we need to pass the size of the array as the second argument to the function.

```c++
#include <iostream>

using namespace std;

float average ( float a[], int size)
{
	int i;
	float avg, sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += a[i];
	}
	avg = sum/size;

	return avg;
}

int main()
{
	int size, j;
	cout << "Enter the size of array" << endl;
	cin >> size;
	float b, n[size];

	for (j = 0; j < size; j++)
	{
		cout << "Value of n[" << j << "] : " << endl;
		cin >> n[j];
	}

	b = average(n, size);
	cout << "Average of numbers = " << b << endl;

	return 0;
}
```

The code is similar to the previous one except that we passed the size of array explicitly - __float average ( float a[], int size)__.

We can also pass an array to a function using pointers. Let's see how.

```c++
#include <iostream>

using namespace std;

void display ( int *p)
{
	int i;
	for (i = 0; i < 8; ++i)
	{
		cout << "n[" << i << "] = " << *p << endl;
		p++;
	}
}

int main()
{
	int size, j;
	int n[] = {1, 2, 3, 4, 5, 6, 7, 8};
	display(n);

	return 0;
}
```
- __void display(int *p) - this means that the function 'display' is taking a pointer of an integer and not returning any value.

Now, we passed the pointer of an integer i.e., pointer of array n[] - 'n' as per the demand of our function 'display'.

Since __p__ is the address of the array __n[]__ in the function 'display', i.e., the address of the first element of the array (n[0]), therefore __*p__ represents the value of n[0]. In the for loop in the function, __p++__ increased the value of p by 1. So when i = 0, the value of *p gets printed. then p++ increases *p to 


## For-each loop

## 2D Arrays

### Initialization of 2D Array

Same as in one-dimensional array, we can assign values to a 2-dimensional in 2 ways as well.

In the first method, just assign a value to the elements of the arrays. If no value is assigned to any element, then its value is assigned zero by default.

Suppose we declared a 2-dimensional array a[2][2]. Then to assign it values, we need to assign a value to its elements.

```c++
int a[2][2];
a[0][0] = 1;
a[0][1] = 2;
a[1][0] = 3;
a[1][1] = 4;
```

The second way is to declare and assign values at the same time as we did in one-dimensional array.

```c++
int a[2][3] = { 1, 2, 3, 4, 5, 6};
```

We can also write the above code as:

```c++
int a[2][3] = {
	{1, 2, 3},
	{4, 5, 6}
};
```

### Why use 2D Array?
