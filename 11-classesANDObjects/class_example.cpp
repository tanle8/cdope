#include <iostream>
 
using namespace std;

// Define our own class named `Rectangle`
// `class` is a keyword which means that `Rectangle` is 
// a class.
//
// Inside the `Rectangle` class, we declared two variables and three functions.
// These variabels and functions belong to the class Rectangle since these are declared inside the class and thus are called __members__ of the class.
// There are two types of members of a class:
// - __data members__ - In the class Rectangle, length and
// breadth are the data members since these store the information
// (length and breadth) of the objects of the class.
// - __member functions__ - setLength(), setBreadth() and
// getArea() are the member functions of the Rectangle class.
//
// Note that while defining the member functions, we have written
// `Rectangle::` before the function name. This is to tell the
// compiler that the function belongs to the class Rectangle.

class Rectangle
{
	public:
		/* declaring variable */
		int length;         //length of rectangle
		int breadth;        //breadth of rectangle
		/* declaring member functions */
		void setLength( int l );
		void setBreadth( int b );
		int getArea();
};
 
/* defining member functions */
void Rectangle::setLength( int l )
{
	length = l;
}


void Rectangle::setBreadth( int b )
{
	breadth = b;
}


int Rectangle::getArea()
{
	return length * breadth;
}
 

int main()
{
	// Declare `rt` as an object of class `Rectangle`
	// It's the same as saying that `rt` is a `Rectangle`.
	// For this, `Rectangle` must be defined
	// `rt.setLength(7); - This statement will call the function setLength with the 
	// parameter value 7. To call any function, we use `.` DOT after the object and
	// then call that function.
	// Since `rt` is an object of the `Rectangle` class, so `rt.setLength` will call
	// the function `setLength` of `Rectangle` class for `rt`. This will set the value
	// of length as 7 for `rt`.
	// Similarly, rt.setBreadth(4) will call the function `setBreath` and will set the 
	// value of breadth as 4.	
	// 
	// `int area = rt.getArea();` - `rt` will call the function getArea() which will 
	// return `length * breadth` which is 28. This value will get assigned to the
	// variable area.
	//
	// `public` - We declared all the members of the class as public.
	// 		public is a modifier which allows the members of a class to
	// 		be accessed directly from outside the class.
	// Like public, there are other modifiers also like `private` and `protected`.
	// 


	Rectangle rt;        
	rt.setLength(7);
	rt.setBreadth(4);
	int area = rt.getArea();
	cout << "Area : " << area << endl;
	return 0;
}


















