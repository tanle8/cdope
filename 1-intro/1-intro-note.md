# Variabels and literals
#### Initialization
We can also assign the value to a variable at the time of its declaration. Such assignment is known as **initialization**. Thus, we can  assign a value `4` to a variable `n` at the time of itsdeclaration as follows:
>int n = 4;

Here, we initialized a variable `n` with a value 4.

> An uninitialized variable takes some garbage value.

An **uninitialized** variable is the one to which we have not assigned any value.
Unlike some programming languages where a variable which has not been assigned any value takes a value zero, an uninitialized variable in C++ by default takes some ***garbage*** value.

## Data Types
Variabls can be of different types depending on the type of data it can store.
In the last example, the variable `n` was declared `int` ans thus can store an integer value. Therefore, it was of type `int`. Similarly, a variable which stores a character value is of type **char** i.e., it can store character values is of type `char` and so on.

We specify the type of a variable at the time of declaration. For exampl, a ...


## Type Casting
### Implicit Conversion
Since we cannot add an int and a float, so both the numbers have to be of the same data type i.e. either both are int or both are float. Since float is a larger data type than int, therefore int variable gets converted into float automatically and then both the float variables add up. This automatic conversion is called implicit conversion.

>> All the character variables get converted to integers while performing arithmetic operations or in any other such expression.

### Explicit Conversion
We can also manually convert values from one data type to another as follows:
`( data-type ) expression ;`

* example of this part is explicit.cpp *

In this example, since `c` is declared of type float, therefore we are converting **float** to type **int** by writing `(int) c`.


## I-values and r-values
We know that when we declare a variable, it is given a memory location and its value is stored in that location. Each `memory location` has an address which becomes the address of the variabe which occupies that memory location. 


