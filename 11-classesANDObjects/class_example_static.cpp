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
