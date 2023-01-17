#include<iostream>

using namespace std;

class base
 {
 	 public :
 	 	void display()
 	 	 {
 	 	 	 cout << "\nDisplay of Base";
		   }
		   
		virtual void show()
		 {
		 	 cout << "\nShow of Base";
		 }
 };
 
 
 
 class derived : public base
  {
  	   public :
 	 	void display()
 	 	 {
 	 	 	 cout << "\nDisplay of Derived";
		 }
		   
	       void show()
		 {
		 	 cout << "\nShow of Derived";
		 }
  };











int main()

 {
 	
	 base b_obj;
	 derived d_obj;
	 
	 base *bptr;
	 
	 bptr = &b_obj;
	 
	 bptr -> display();
	 bptr -> show();
	 
	 cout <<endl;
	 
	 
	 bptr = &d_obj;
	 
	 bptr -> display();
	 bptr -> show();
	 
	 
         return 0;
 }
