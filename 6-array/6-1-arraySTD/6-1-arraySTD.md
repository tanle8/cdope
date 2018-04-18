# std::array

> Everybody should know how to program a computer because of it teaches you how to think.
> _-Steve Jobs_

## The need

**std::array** is a ***container*** that wraps around fixed-size arrays. It also doesn't loose the information of its length when decayed to a pointer.

You know that when we pass an array (aka. C-style array) to a function, the address of the array gets passed

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

Tip:


### Length of std::array

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

### front()

### back()

### empty()

### max_size()

### fill()

### swap()

## Iterators

Instead of indices, we can also use iterators to iterate over a container (e.g. std::array).

An iterator is a kind of pointing item which can be pointed to an element of a container and has the ability to iterate over the container.

It means that if we have an iterator at the beginning of an std::array then, it can go over the entire __std::array__ pointing each item of the std::array.

We are provided with the following iterator functions:

- begin
- end
- rbegin
- rend

### sort

## Multidimensional std::array

Similar to C-style arrays, we can also make multidimensional __std::array__. Let's look at the syntax to make a _3x3_ std::array.

```c++
std::array < std::array < int, 3 >, 3 > a { {{1,2,3}, {4,5,6}, {7,8,9}} };
```

### Passing a multidimensional std::array to a function
