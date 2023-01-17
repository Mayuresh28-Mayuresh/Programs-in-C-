#include<iostream>

using namespace std;


class A
 {
 	private :
 		int num; //private data member
 		
 	public :
 		A()  //constructor
 		 {
 		 	num = 28;
		  }
		  
	// friend function is declared with reference to an object of the class A	  
	friend void shownum(A&);
 		
 	
 };

// Friend function definition is always outside the class
// It doesn't require either the keyword friend nor the scope resolution operator 
// because it is not a member function of a class
 void shownum(A &a)
  {
  	 cout << "Number is : " << a.num;
  }

int main()
 {
 	
 	A a;
 	
 	// It is called like a normal C++ function without using the object and dot operator
 	shownum(a);
 	
 	
 	return 0;
 }
