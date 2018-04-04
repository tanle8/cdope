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

If *p* is a pointer to the array **age**, then it means that *p* points to **age[0]**.
"""
int age[50];
int *p;
p = age; 
"""

The above code assigns the address of the first element of age of *p*.
Now, since *p* points to the first element of the array **age**, `*p` is the value of the first element of the array.

> Since `*p` refers to the first array element, `*(p+1)` and 

## Passing the whole Array in Function

## For-each loop

## 2D Arrays

### Initialization of 2D Array
Same as in one-dimensional array, we can assign values to a 2-dimensional in 2 ways as well.

In the first method, just assign a value to the elements of the arrays. If no value is assigned to any element, then its value is assigned zero by default.

Suppose we declared a 2-dimensional array a[2][2]. Then to assign it values, we need to assign a value to its elements.

```
int a[2][2];
a[0][0] = 1;
a[0][1] = 2;
a[1][0] = 3;
a[1][1] = 4;
```
The second way is to declare and assign values at the same time as we did in one-dimensional array.

```
int a[2][3] = { 1, 2, 3, 4, 5, 6};
```

We can also write the above code as:
```
int a[2][3] = {
	{1, 2, 3},
	{4, 5, 6}
};


### Why use 2D Array?
