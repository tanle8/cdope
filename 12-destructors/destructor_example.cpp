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