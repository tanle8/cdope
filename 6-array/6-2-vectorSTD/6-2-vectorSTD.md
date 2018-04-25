# std::vector

We talked about std::array. We will explore __std::vector__

Consider a case where you want to store the marks of the students of a class. But you don't know the __number of students__ in the class and have only an approximate idea how the number. You can only declare an array by specifying some array length.

Now, if the length of the array which you have specified during its declaration is smaller than the number of students, the the marks of all the students could not be stored. Also, if we declare its length much larger than the number of students, the unncessarily extra memory will be allocated to the array which is not required.

In such cases, we don't know about the array length until compile time (when computer compiles the code). This is where we need __std::vector__.

## What is std::vector

Unlike std::array whose length is specified at the time of declaration and remains constant till compile time, we can change the length of std::vector dynamically as the program executes according to our requirement.

__Vectors__ are sequence containers which represent arrays which can change in size. Thus, we need not specify its length at the time of declaration and can change it later in the program.

Now let's look at how to use std::vector in place of arrays.

## Declaration of std::vector

The declaration syntax of `std::vector` is the same as that of `std::array`, with the difference that we don't need to specify the array length along with the data type as shown below.

    std::vector <data_type> array_name;

For using std::vector, we need to include the __vector__ header in our program.

Let's look at the declaration of a vector named __marks__ of type _int_ to store the marks of students.

    std::vector<int> marks;

Now let's see how to initialize a vector. 

## Initialization of std::vector

The initialization of an std::vector is also the same as that of std::array. We initialize an std::vector by either of the following ways:

    std::vector <int> marks = {50, 45, 47, 65, 80};

    std::vector <int> marks { {50, 45, 47, 65, 80} };

We can also assign values to the vector after declaration as shown below:

    std::vector <int> marks;
    marks = {50, 45, 47, 65, 80};

In the above declarations, we stored the marks of 5 students in a vector named __marks__. Since we did not declare the array length, so the length of 'marks' became equal to the number of values it was initialized with. Now, we may change the number of students i.e. either store the marks of more students or remove the marks of some students.

### Length of std::vector

In std::vector also, the __size()__ function returns the length (i.e. number of elements in the vector).

An example of std::vector:

```c++
#include <iostream>
#include <vector>

int main()
{
    std::vector <int> marks = {50, 45, 47, 65, 80};
    marks = {50, 47, 60};
    std::cout << "length of array: " << marks.size() << std::endl;
    return 0;
}
```

In this example, we first initialized the vector __masks__ with 5 elements, thus making its length 5. In the second statement, we reassigned __marks__ with 3 values, thus making its length 3. After reassigning, the values of marks[0], marks[1], marks[2] are 50, 47, and 60 respectively. Resizing is not possible in case of arrays.

## Passing std::vector to function

Let's look at an example of passing a vector to a function.

```c++
#include <iostream>
#include <vector>

using namespace std;

void printVector (const std::vector<int> &n)
{
    for (int j = 0; j < n.size(); j++)
    {
        cout << "n[" << j << "] = " << n[j] << endl;
    }

}

int main()
{
    vector <int> n = {1,2,3,4,5};

    printVector(n);

    return 0;
}
```

- `void printVector (const std::vector<int> &n)` - __const__ is used here to prevent the compiler from making a copy of the vector and this enhances the performance. The passed vector will be __n__ in this function as `&n` is the parameter of the function 'printVector'.

## Member Functions

std::vector also has a number of member functions which makes adding and deleting elements from the vector easier. Let's look at some of these.

### at()

__at__ function is used to access the element at specified position (index). Let's see an example.

In this example, `marks.at(2) = 74` assigned 74 to the third element (marks[2]) of the vector.

### front()

The __front__ function returns the first element of a vector.

### back()

The __back()__ function returns the last element of a vector.

### empty()

This function checks whether a vector contains any element or not. It returns __1__ if the length of a vector is 0 and __0__ if it contains some element.

### resize()

It resizes a vector so that it contains the specified number of elements. The new element will be assign a value 0.

### max_size()

It returns the maximum number of elements that the vector can hold. This is not the amount of storage space currently allocated to the vector, but the __maximum size the vector could reach due to limitations in system implementations__.

### assign()

### push_back()

This function adds a new element at the end of the vector (at the end of the last element of the vector), thus increasing the size of the vector by one.

### pop_back()

### capacity()

### revert()

### insert()

### earse()

### clear()

### swap()

## Multidimensional std::vector

### Passing a multidimensional std::vector to a function