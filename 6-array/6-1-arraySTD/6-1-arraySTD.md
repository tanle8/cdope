# std::array

> Everybody should know how to program a computer because of it teaches you how to think.
> _-Steve Jobs_

## The need

Before learning about __std::array__, let's first see the need for it.

__std::array__ is a `container` that wraps around fixed-size arrays. It also doesn't loose the information of its length when decayed to a pointer.

You know that when we pass an array (aka. C-style array) to a function, the address of the array gets passed to the function i.e. the pointer to the array gets passed to the function. Thus, the information about the _size of the array_ gets lost.

To deal with such situations, we use __std::array__ and __std::vector__. Let's first have a look at the syntax of std::array.

## Declaration of std::array

The declaration of `std::array` is as follows:

```c++
std::array < datatype, array_size > array_name ;
```

For example, this is the declaration of an integer array of length 5:

```c++
std::array <int, 5> n;
```

Here, `n` is an std::array of type *int* and its length is *5*.

In order to use std::array, we need to include the following code in the beginning of our program.

```c++
#include <array>
```

## Initialization of std::array

Like arrays, we initialize an std::array by simply assigning it values at the time of declaration. For example, we will initialize an integer type std::array named `arrayD` of length 5 as shown below:

```c++
std::array <int, 5> arrayD = {1, 2, 3, 4, 5};
```

There is another way of initializing an std::array which is shown below:

```c++
std::array <int, 5> arrayD {{1, 2, 3, 4, 5}} ;
```

> The length of an std::array must be known at the time of compilation

Note: Unlike *C-style* arrays in which array length at the time of initialization was not necessary, we cannot omit writing the array length in case of std::array. For example, the following initialization is **incorrect**:

```c++
std::array n {{1, 2, 3, 4, 5}} ;    // Incorrect
```

We can also assign values to the array as follows:

```c++
std::array n;
n = {1, 2, 3, 4, 5};
```

std::array functions exactly the same as C-style arrays. Now, after knowing how to declare and assign value to an array, let's see a simple example of printing the value of an element of an std::array

```c++
#include <iostream>
#include <array>

int main()
{
    std::array<int , 5> n = {1, 2, 3, 4, 5};
    std::cout << n[2] << std::endl;

    return 0;
}
```

In this example, we simply printed the value of the third element of the array by printing _n[2]_.

> If you are getting any compilation error, instruct your compiler to use C++11 by using the following command to compile:
> g++ -std=c++11 -o filename filename.cpp

### Length of std::array

We can return the length of an std::array using the __size()__ function. The following example illustrates its use:

```c++
#include <iostream>
#include <array>

int main()
{
    std::array <int, 5> n = { 1, 2, 3, 4, 5};

    std::cout << "Number of elements in the array are: " << n.size() << std::endl;

    return 0;
}
```

Thus, the size() function returned the number of elements in the array. Now, let's look at another example just to make you realize that an std::array functions no different than a C-type array.

```c++
#include <iostream>
#include <array>

using namespace std;

int main()
{
    std::array <int, 5> n;

    // taking values of elements from user
    for (int i = 0; i < n.size(); i++)
    {
        cout << "Enter value of n[" << i << "]" << endl;
        cin >> n[i];
    }

    // Printing the values of elements of array
    for (int j = 0; j < n.size(); j++)
    {
        cout << "n[" << j << "] = " << n[j] << endl;
    }

    return 0;
}   
```

In this example, we simply took the values of the elements of the array using the first for loop and printed them using the second for loop. Notice that we did not write __std::__ before __array__ in the declaration of the array because we wrote the statement __using namespace std__ before the main function.

## Passing std::array to function

Let's look at an example of passing an std::array to a function.

```c++
#include <iostream>
#include <array>

using namespace std;

void printArray (const std::array <int, 5> &n)
{
    std::cout << "length: " << n.size() << endl;

    for (int j = 0; j < n.size(); j++)
    {
        cout << "n[" << j << "] = " << n[j] << endl;
    }
}

int main()
{
    array <int, 5> n = {1, 2, 3, 4, 5};

    printArray(n);

    return 0;
}
```

Explain:

```c++
    void printArray ( const std::array<int, 5> &n)
```

- __const__ is used here to prevent the compiler from making a copy of the array and this enhances the performance.

- The passed array will be _n_ in this function as `&n` is the parameter of the function 'printArray'.

Also, use of the __size__ function on the array inside the function gave us 5 thus, showing that an std::array doesn't lose its property of length when passed to a function.

## Member function

There are a number of member functions of __std::array__ (pre-defined functions). Let's see some of these methods.

### at()

__at()__ function is used to access the element at specified position (index). Let's rewrite the above example by using the at() function with the array name to take input and print the values of the elements of an std::array.

```c++
#include <iostream>
#include <array>

using namespace std;

int main(){
    array <int, 5> n;

    //taking values of elements from user
    for (int i = 0; i < n.size(); i++)
    {
        cout << "Enter value of n[" << i << "]" << endl;
        cin >> n.at(i);
    }

    //printing the values of elements of array
    for (int j = 0; j < n.size(); j++)
    {
        cout << "n[" << j << "] = " << n.at(j) << endl;
    }

    return 0;
}
```

Here __n.at(i)__ is the same as writing __n[i]__, which means the element at the _ith_ position.

### front()

__front()__ function returns the first element of an std::array.

```c++
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array <double, 4> arr = {5.6, 4.5, 4.7, 4.5};
    cout << arr.front();

    return 0;
}
```

### back()

It returns the last element of an std::array.

### empty()

This function checks whether an std::array contains any element or not. it return __1__ if the length of an std::array is 0 and __0__ if not.

```c++
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 2> a1 = {1, 2};
    array<int, 0> a2;
    cout << "Array 1 is empty: " << a1.empty() << endl;
    cout << "Array 2 is empty: " << a2.empty() << endl;

    return 0;
}
```

Since __a1__ contains 2 elements, so __a1.empty()__ returned 0 and since __a2__ does not contains any element, __a2.empty()__ returned __1__.

### max_size()

This function returns the maximum number of elements that the std::array can hold. The following example will make it clear.

```c++
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 8> arr;
    cout << "The max size of array is: " << arr.max_size() << endl;
    cout << "The size of array is: " << arr.size() << endl;

    return 0;
}
```

### fill()

__fill()__ function fills all the elements of the std::array with the same specified value.

```c++
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 4> arr = {1, 2, 3, 4};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "The array is: " << arr[i] << " ";
    }
    
    arr.fill(2);
    
    cout << "After using fill(): " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "The array is: " << arr[i] << " ";
    }

    return 0;
}
```

In this example, __arr.fill(2)__ assigned 2 to all the elements of __arr__.

### swap()

This function swaps the contents i.e. it exchanges the value of one std::array with that of another.

```c++
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 4> a1 = {1,2,3,4};
    array<int, 4> a2 = {5,6,7,8};
    a1.swap(a2);

    //printing the values of the elements of a1
    cout << "Elements of a1" << endl;
    for (int j = 0; j < a1.size(); j++ ) 
  	{
    	cout << a1[j] << endl;
  	}
  	
  	//printing the values of the elements of a2
  	cout << "Elements of a2" << endl;
    for (int j = 0; j < a2.size(); j++ ) 
  	{
    	cout << a2[j] << endl;
  	}
    
    return 0;
}
```

Here, __a1.swap(a2)__ interchagned the values of the two std::array.

## Iterators

Instead of indices, we can also use iterators to iterate over a container (e.g. std::array).

An iterator is a kind of __pointing item__ which can be pointed to an element of a container and has the ability to iterate over the container.

It means that if we have an iterator at the beginning of an std::array then, it can go over the entire __std::array__ pointing each item of the std::array.

We are provided with the following iterator functions:

- begin - Returns an iterator to the first element of the container.
- end - Returns an iterator to the end i.e. the element after the __theoretical__ last element of the container.
- rbegin - Returns a reverse iterator to the first element of the reversed container.
- rend - Returns a reverse iterator to the theoretical element preceding the first element of the container.

Let's see an example to understand this.

```c++
#include <iostream>
#include <array>
#include <iterator>

using namespace std;

int main()
{
    array<int, 4> a = {1, 2, 3, 4};

    for(auto i = a.begin(); i != a.end(); ++i)
    {
    	cout << *i << endl;
    }
    
    return 0;
}
```

- __auto i = a.begin()__ - You must be thinking the reason for using __auto__ here. It is used to automatically assign the correct type to the variable __i__ by the compiler. You will learn more about it in the chapter 'Storage classes'.

- __cout << *i << endl;__ - __*i__ is used to access the element at i or the element at which i is pointing.

- The rest of the code is simple to understand.

### sort

__sort__ is used to sort the elements in a range in ascending order. We need to add a header __algorithm__ to use it. Let's see it working through an example.

```c++
#include <iostream>
#include <array>
#include <iterator>
#include <algorithm>//for sort

using namespace std;

int main()
{
    array<int, 4> a = {47, 23, 90, 1};

    sort(a.begin(),a.end());

    for(auto i = a.begin(); i != a.end(); ++i)
    {
    	cout << *i << endl;
    }
    
    return 0;
}
```

You can see that the function __sort__ arranged the array __a__ in ascending order.

## Multidimensional std::array

Similar to C-style arrays, we can also make multidimensional __std::array__. Let's look at the syntax to make a _3x3_ std::array.

```c++
std::array < std::array < int, 3 >, 3 > a { {{1,2,3}, {4,5,6}, {7,8,9}} };
```

This is quite simple to understand. The inner array (std::array <int, 3>) is an array of 3 integers and the outer array is an array of 3 such inner arrays (std::array <inner_array, 3>).

Thus, we didn't do anything new here. Instead of making an array of integers, we made an array of arrays.

Let's look at an example to make a multidimensional array and access all its elements.

```c++
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<array<int, 3>, 3> a  {{{1,2,3},{4,5,6},{7,8,9}}};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
```

### Passing a multidimensional std::array to a function

A multidimensional std::array is also passed to a function in a similar way a 1D array is passed. Let's look at an example:

```c++
#include <iostream>
#include <array>
using namespace std;

void display (const std::array<std::array<int, 3>, 3> &a)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    array<array<int, 3>, 3> n {{{1,2,3},{4,5,6},{7,8,9}}};
    display(n);
    return 0;
}
```
