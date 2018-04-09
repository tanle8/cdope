# Classes and Objects
> Talent is good, Practice is better, and Passion is Best -Frank Lloyd Wright


## Access Modifiers

The access modifiers decide _how_ the `members of a class` can be accessed.
There are three types fo access modifiers in C++.

- public

- private

- protected

### Public

When we declare any class member as __public__, that variable becomes available everywhere in the program, even outside the function in which it was declared.

### Private

The member declared as __private__ can only be accessed inside the class in which it is declared. Thus, the object of the class _cannot directly_ access its members as we did in the case of public.

> By default, all the members of a class are private.

If we try to access a private member of any class from outside that class, we will get a compile time error. Let's see an example.

```c++
#include <iostream>
 
using namespace std;
 
class Rectangle
{
	int length;
	public:         
		int breadth;       
		void setLength( int l );
		int getArea();
};
 
void Rectangle::setLength( int l )
{
	length = l;
}
int Rectangle::getArea()
{
	return length * breadth;
}
 
int main()
{
	Rectangle rt;        
	rt.setLength(7);
	rt.breadth = 4;
	int area = rt.getArea();
	cout << "Area : " << area << endl;
	return 0;
}
```

In this example:

-  __breadth__ and the functions __setLength__ and __getArea__ are declared __public__.

- The data member __length__ is __private__ since all the members are private _by default_.

Since we cannot directly access any private member, therefore cannot access __length__ directly. So, we declared another member function `setLength` as public which assigned a value ___7___ to the length.

The rest of the members were directly accesed from the main function.

__Note__: Though the data member `length` is by default private, we can declare it private as well as shown below:
```c++
class Rectangle
{
	private:
		/* declaring member data */
		int length;
	public:
		/* declaring member data */
		int breath;
		/* declaring member functions */
		void setLength( int l );
		int getArea();
};
```

### Protected

Protected is similar to private. Any member declared as protected cannot be accessed outside the class but can be accessed by any subclass of that class.


## Constructor

A __constructor__ is a _special_ `member function` of a class which is called _automatically_ when an _object_ of that class is called. It has the __same name__ as that of the __class__ and has __no return type__.

> Constructor is a special type of function which is used to initialize an object. It is invoked at the time of object creation.

```c++
#include <iostream>

using namespace std;

class Rectangle
{
	public:
		int length;
		int breadth;
		Rectangle()	// This is a constructor, same as that of the class `Rectangle` and has no return type.
		{
			length = 10;
			breadth = 10;
		}
};


int main()
{
	Rectangle rt;
	cout << "length = " << rt.length << endl;
	cout << "breadth = " << rt. breadth << endl;
	return 0;
}
```

In this example when we created the `object` __rt__ of `class` __Rectangle__, the `constructor` __Rectangle()__ automatically got called and initialized the `data members` for the object __rt__. It initialized the _length_ and _breadth_ of __rt__ to `10` each.

When the constructor was called, length and breadth were created and then in the body of the constructor, these member variables were assigned values.

> We can also make a constructor with nothing in its body.
> Rectangle() {};

### Constructor having Parameters

We can also have constructors with parameters.

```c++
#include <iostream>

using namespace std;

class Rectangle
{
	int length;
	int breadth;

	public:
		Rectangle( int l, int b )
		{
			length = l;
			breadth = b;
		}
		int getArea()
		{
			return length * breadth;
		}
};

int main()
{
	Rectangle rt( 7, 4);
	cout << "Area : " << rt.getArea() << endl;
	return 0;
}

```
In this example, we have parameters in our constructor. As told earlier, a constructor is also a function which is executed at the time of creating an object and has the same name as that of its parent class. So, it will work like a function and assign values passed from __Rectangle rt( 7, 4 );__ to length and breadth.

```c++
Rectangle rt( 7, 4);
```

It will create an object `rt` of class __Rectangle__ and pass _7_ to `l` and _4_ to `b` ( `l` and `b` are used in the constructor of the class __Rectangle__).



## Use of Static

__static__ is used to make access to any data variable or function without making an object of that class. It means that __static__ is used so that we can access any data variable or function without making an object of that class.

Let's see this:
```c++
#include <iostream>

using namespace std;

class Rectangle
{
	public:
		static void printArea( int l, int b )
		{
			cout << l*b << endl;
		}
};

int main ()
{
	Rectangle::printArea ( 4, 7 );
	return 0;
}
```

Our function `printArea` is static. So, we directly used it on `Rectangle` class, without making any object of it.

> Note that for calling a member function by the class itself, we have to use __::__ in place of the __Dot__ `.`.

In this example, we made a member function static. Now let's see another example in which a data member is made static.

```c++
#include <iostream>

using namespace std;

class A
{
	public:
		static int a;
};

int A::a = 8;

int main()
{
	cout << A::a << endl;
	return 0;
}
```

Here, the variable __a__ is made ___static___ and thus we _directly_ accessed it in the main function.

## Returning and Passing Object in a function


