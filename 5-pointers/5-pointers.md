# Pointers
Address in C++ is represented as **&a** read as **address of a**.
*Remember* that all the time when we were taking the value of `a` using `std::cin`, we were taking an input from the user and storing it at the address of `a`, i.e. in `a`.


## How to use pointer
"""c++
int a = 25;
int *b; /* declaration of pointer b */
b = &a;
"""
- `int *b` - this statement should mean that `*b` is an integer but then what is the significance of `*` before `b`? It means that `b` points to some integer (`b` is a pointer to some integer).
Or we can say that `b` will store the address of some integer.

- `b = &a;` - As said, `b` will store the 

## Passing Pointers to Function

## Pointers to Array

