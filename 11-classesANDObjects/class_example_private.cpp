#include <iostream>

using namespace std;

class Rectangle
{
	int length;	// by default, all members of a class are private.
	public:
		int breadth;
		void setLength ( int l );
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
	// Create an object (instance) of Rectangle class called `rt`:
	Rectangle rt;
	// rt is the object of class Rectangle so rt.setLength will call the function
	// setLength() of class Rectangle with the parameter value of 7
        rt.setLength(7);
        rt.breadth = 4;
        int area = rt.getArea();
        cout << "Area : " << area << endl;
        return 0;
}

