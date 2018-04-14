/* 2.
Assign and print:
- the roll number, 
- phone number and 
- address of two students 
having names "Sam" and "John" respectively by creating two objects of the class 'Student'.
*/

#include <iostream>
#include <string>

using namespace std;

class Student
{
    public:
            /* declaring variable members */
            string name;
            int roll_no;
            string phone_no;
            string addrs;
};

int main ()
{
    // Create two object of class `Student`:
    Student st1, st2;
    // Assign the properties for objects:
    // first object - st1:
    st1.name = "Sam";
    st1.roll_no = 1;
    st1.phone_no = "0912678999";
    st1.addrs = "1st Hung Vuong";
    //second object - st2:
    st2.name = "John";
    st2.roll_no = 2;
    st2.phone_no = "0912345678";
    st2.addrs = "1st Dai Co Viet";

    // Print the objects's properties
    cout << "object 1 name: " << st1.name << endl;
    cout << "object 1 roll: " << st1.roll_no << endl;
    cout << "object 1 phone number: " << st1.phone_no << endl;
    cout << "object 1 address: " << st1.addrs << endl;

    cout << "object 2 name: " << st2.name << endl;
    cout << "object 2 roll: " << st2.roll_no << endl;
    cout << "object 2 phone number: " << st2.phone_no << endl;
    cout << "object 2 address: " << st2.addrs << endl;

    cout << "ok guys" << endl;

    return 0;
}