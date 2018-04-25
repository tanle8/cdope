#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 4> a1 = {1,2,3,4};
    array<int, 4> a2 = {5,6,7,8};
    a1.swap(a2);

    //printing the values of the elements of a1
    cout << "Elements of a1" << endl;
    for (int j = 0; j < a1.size(); j++ ) 
  	{
    	cout << a1[j] << endl;
  	}
  	
  	//printing the values of the elements of a2
  	cout << "Elements of a2" << endl;
    for (int j = 0; j < a2.size(); j++ ) 
  	{
    	cout << a2[j] << endl;
  	}
    
    return 0;
}