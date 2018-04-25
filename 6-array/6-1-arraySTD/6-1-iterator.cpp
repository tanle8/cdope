#include <iostream>
#include <array>
#include <iterator>

using namespace std;

int main()
{
    array<int, 4> a = {1, 2, 3, 4};

    for(auto i = a.begin(); i != a.end(); ++i)
    {
    	cout << *i << endl;
    }
    
    cout << "//--------------INSIGHT--------------//" << endl;
    cout << "a.begin(): " << a.begin() << endl; 
    cout << "a.begin(): " << a.end() << endl; 
    cout << "*i = *( a.begin() ): " << *(a.begin()) << endl; 
    cout << "*i = *( a.end() ): " << *(a.end()) << endl;
    cout << "Note: a.end() is the element after the last element of the array" << endl;
    cout << "*i = *( a.rbegin() ): " << *(a.rbegin()) << endl; 
    cout << "*i = *( a.rend() ): " << *(a.rend()) << endl; 


    return 0;
}