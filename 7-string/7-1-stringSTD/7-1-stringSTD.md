# std::string

> How difficult life may seem, there is always something you can do and succeed at.
> _-Stephen Hawking_

Since string is used extensively, C++ provides a built-in string data type. Just like int, float or other data types, we can use string data type also. It simply makes using strings easier.

Same as cin and cout, string is also defined in the __std namespace__. To use strings in this way, we need to include the header since it is declared in the 

## Input a string

### Taking multi-word input using std::getline

## Let's append two strings

## Member Functions

### length()

### empty()

### size()

### resize()

__resize()__ function resized our string to a specified length.


### clear()

This function clears the content of strings

### operator[]

### at()

It also retuns the character at some specified position in a string.

### compare()

__compare()__ function compares the value of a string (str1) with another string (str2)

- It returns __0__ if both the strings are equal.
- It returns a __positive value__ if either `str1` > `str2` or the first unmatched letter of `str1` is greater than that of `str2`.
- It returns a __negative value__ if either `str1` < `str2` or the first unmathced letter of `str1` is less than that of `str2`.

### find()

__find()__ function finds the position of the first occurrence of a character or string in a string.

### substr()

__substr()__ function returns a substring from a string by specifying its position.
