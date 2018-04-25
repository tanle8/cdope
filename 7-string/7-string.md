# String

> Withour practice, your knowledge is poison.
> _-Chanakya_

We know that __string__ is a collection of characters. Let's again have a look at string and learn more about it.

There are two different types of strings in C++:

- C-style string
- std::string (part of the standard library)

In this chapter, we will focus on C-style string.

## C-style String

We can think of string as an array of characters, like "Sam" is a string and it is an array of characters 'S', 'a', 'm' and '\0'.

Look at the character at the 3rd index. It represents __null character__. ASCII value of __'\0'__ is 0 and that of _normal_ __0__ is 48. It represents the termination of a string. So, if we declare:

    char name[] = "Sam";

It is:
    ['S', 'a', 'm', '\0']

> We always put string in " ".

We can also declare a string variable using characters as follows:

    char name[] = {'S', 'a', 'm', '\0'};

Let's see two examples to print a string, one without and the other with for loop.

```c++
#include <iostream>

using namespace std;

int main()
{
    char str[] = "Hello";
    cout << str << endl;
    return 0;
}
```



## Taking string input

### Taking multi-word string input

## Pointers and String

## Passing Strings to Functions

## Predefined string functions

## 2D Array of Characters
