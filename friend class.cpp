// Demonstration of friend class

#include<iostream>

using namespace std;

class A
 {
 	
 	 private :
 	 	
 	   int num;
 	   
 	 protected :
 	 	int num2;
 	 
 	 public:
 	 	A()
 	 	 {
 	 	 	 num = 28;
 	 	 	 num2 = 11;
 	 	 	
		   }
 	 
		friend class B;
		
 };
 
 
 class B
  {
  	
  
  	 public :
  	 	 void shownum(A &a)
  	 	  {
  	 	     cout << "\nNumber is : " << a.num << endl << "Number 2 is : " << a.num2;
		  }
  	
  	
  };








int main()
 {
 	
     A a;
     B b;
     b.shownum(a);
 	
 	
 	
 	
 	return 0;
 }

