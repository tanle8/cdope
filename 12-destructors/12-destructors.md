> The difference between ordinary and extraordinary is practice - Vladimir Horowitz

# Destructor

__Destructors__ are functions which are just the opposite of constructors.

We all know that constructors are functions which initialize an object. On the other hand, destructors are functions which destroy the object whenever the object goes out of scope.

It has the same name as that of the class with a __tilde (~)__ sign before it.

```c++
class A
{
    public:
        ~A();   // this is a destructor (function) 
}
```

Here, __~A()__ is the __destructor__ of class A.

> Destructors don't take any argument and have no return type.

## When is a destructor called?

A Destructor __gets automatically called when the object goes out of scope__.

We know that a non-parameterized constructor gets automatically called when an object of the class is created.

Exactly opposite to it, since a destructor is also always non-parameterized, it gets called when the object goes out of scope and destroys the object. We will learn more about new and delete in the chapter _Dynamic Memory Allocation_.

Destructors are used to __free the memory__ acquired by an object during its scope (lifetime) so that the memory becomes available for further use.

Let's see an example of a destructor.

```c++
#include <iostream>

using namespace std;

class Rectangle
{
    /*Declaring variable members
    * by default all variable and function members are private.
    */

    int length;
    int breadth;
    
    public:
            void setDimension ( int l, int b )
            {
                length = l;
                breadth = b;
            }

            int getArea()
            {
                return length * breadth;
            }

            /* create a constructor of class `Rectangle` */
            Rectangle()     // constructor
            {
                cout << "Constructor" << endl;
            }

            /* create a deconstructor of class `Rectangle` */
            ~Rectangle()    // Destructor
            {
                cout << "Destructor" << endl;
            }
};

int main()
{
    // Create an object of the class `Rectangle`
    Rectangle rt;
    // this rt object accesses to the `setDimension` member function with two parameters.
    rt.setDimension (7, 4);
    cout << rt.getArea() << endl;
    return 0;
}

```

In this example, when the object `rt` of class __Rectangle__ was created, its constructor was called, not matter in what order we define it in the class. After that, its object called the functions `setDimension` and `getArea` and printed the area. At last, when the object went out of scope, its destructor got called.

Note that the destructor will get automatically called even if we do not explicitly define it in the class.