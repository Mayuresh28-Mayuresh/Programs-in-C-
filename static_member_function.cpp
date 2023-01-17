// Demonstration of static data member and static member function

#include<iostream>

using namespace std;

class demostatic
 {
 	
 	static int length;
 	
 	public :
 		static void show()
 		 {
 		 	cout << "Length is : "<< length;
		  }
 	
 	
 };
 

int demostatic :: length = 20;  // static data member defined or initialized with 20

int main()
 {
 	
 	demostatic :: show(); //static member function called using the classname instead of objects
 	
 	
 	return 0;
 }
