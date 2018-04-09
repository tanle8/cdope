#include <iostream>

using namespace std;

class Rectangle
{
        public:
                int length;
                int breadth;
                Rectangle()     // This is a constructor, same as that of the class `Rectangle` and has no return type.
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

