#include <iostream>
 
using namespace std;
 
class Rectangle
{
	public:
		int length;         //length of rectangle
		int breadth;        //breadth of rectangle
		/* declaring member functions */
		// This was the same as the previous example but this time we defined 
		// the function at the time we declared it in the Rectangle class.
		void setLength( int l )
		{
			length = l;
		}
		void setBreadth( int b )
		{
			breadth = b;
		}
		int getArea()
		{
			return length * breadth;
		}
};
 
int main()
{
	Rectangle rt;        
	rt.setLength(7);
	rt.setBreadth(4);
	int area = rt.getArea();
	cout << "Area : " << area << endl;
	return 0;
}
