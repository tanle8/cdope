# Array
Array means collection. In C++ also, an array is a collection of similar types of data.
e.g. An array of `int` will contain only integers, an array of `double` will contain only doubles.
## Why array?
Suppose we need to store the marks of 50 students in a class and calculat ethe average marks. Declaring 50 separate variables will do the job but no programmer would like to do so> And here comes the **array** in action.

## How to declare an array
"""
<datatype> <array_name> [ <array_size> ];
"""

For example, take an integer array `n`:
`int n[6];`




## Initializing an array

## Pointer to Arrays
If we say that a variable `y` **points to an array** `n`, then it means that the value of `y` is the **address of the first element of the array** i.e., `n[0]`. So, `y` is the pointer to the array `n`.

If `p` is a pointer to the array **age**, then it means that `p` points to `age[0]`.
"""C++
int age[50];
int *p;
p = age;
"""

The above code assigns the address of the first element of age to `p`.

Now, since `p` points to the first element of the array **age**, `*p` is the value of the first element of the array.

> Since `*p` refers to the first array element, `*(p+1)` and `*(p+2)` refers to the second and third elements respectively and so on.

So, `*p` is **age[0]**, `*(p+1)` is **age[1]**, `*(p+2)` is **age[2]**.

Similarly, `*age` is **age[0]** (value at age), `*(age+1)` is **age[1]**, `*(age+2)` is **age[2]** (value at age[2]) and so on.

That's all in pointer to arrays.


## Passing the whole Array in Function
We can also pass a whole array to a function by passing the array name as argument. The trick is that we pass the address of array, that is the address of the first element of the array.
Thus, by having the pointer of the first element, we can get the entire array.
## For-each loop

## 2D Arrays
2-dimensional arrays also exit and are generally known as **matrix**. These consist of rows and columns.

This is how to declare and initialize a 2D array. Similar to one-dimensinoal array, we define 2-dimensional array as below:
```C++
int a[2][4];
```
The above array `a` is a 2D array of type *int* which consists of **2 rows** and **4 columns**.

### Initialization of 2D Array
Same as in one-dimensional array, we can assign



### Why use 2D Array?
