/* 3. 
Write a program to print: 
- the area and 
- perimeter of a triangle having sides of 3, 4 and 5 units 

by creating a class named 'Triangle' with a function to print the area and perimeter.
*/

#include <iostream>
#include <string>

using namespace std;

class Triangle
{
    public:
            void printArea ( int s1, int s2, int s3){
                double area, perimeter;
                perimeter = s1 + s2 + s3;
                area = perimeter/2.0;

                cout << "Perimeter: " << perimeter << endl;
                cout << "Area: " << area << endl;
            }
};