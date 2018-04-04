# std::array

The need:
**std::array** is a ***container*** that wraps around fixed size arrays. It also doesn't loose the information of its length when decayed to a pointer.

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
We can also assign values to the array as follows.


### Lenght of std::array

## Passing std::array to function

## Member function
### at()

### front()

### back()

### empty()

### max_size()

### fill()

### swap()

## Iterators

### sort

## Multidimensional std::array
### Passing a multidimensional std::array to a function

