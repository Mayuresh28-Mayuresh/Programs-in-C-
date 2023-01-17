//Merging two arrays in c++

#include<iostream>

using namespace std;

int main()
 {
 	
 	int i;
 	int n1,n2,n3;
 	
 	cout << "Enter the count of array 1 : ";
 	cin >> n1;
 	
 	cout <<endl;
 	
 	cout << "Enter the count of array 2 : ";
 	cin >> n2;
 	
 	int *arr1 = new int[n1];
 	
 	int *arr2 = new int[n2];
 	
 	int *result = new int[n1 + n2];
 	
 	cout << "Enter the elements of array 1 : \n";
 	
 	for(i = 0; i < n1; i++)
 	 {
 	 	 cin >> arr1[i];
	  }
	  
	  cout << endl;
	  
	  cout << "Enter the elements of array 2 : \n";
 	
 	for(i = 0; i < n2; i++)
 	 {
 	 	 cin >> arr2[i];
	  }
	  
	  cout << endl;
	  
	  // Merging arrays
	  
	  for(i = 0; i < n1; i++)
	   {
	   	  result[i] = arr1[i];
	   }
	   
	   int j = 0;
	    for(i = n1; i < (n1+n2) ; i++)
	   {
	   	  
	   	  
	   	  while(j < n2)
	   	   {
	   	        result[i] = arr2[j];	
	   	         j++;
	   	         break;
	   	    
		   }
	   	
	 
	   }
	  
	  cout << "Result array is  : \n";
 	
 	for(i = 0; i < (n1+n2); i++)
 	 {
 	 	 cout << result[i] <<endl;
	  }
	  
	  cout << endl;
 	
 	//Deallocating dynamically allocated memory
 	
 	delete arr1,arr2,result;
 	
 	
 	return 0;
 }
