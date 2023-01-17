#include<iostream>

using namespace std;

int main()
 {
 	
 	int temp;
 	int i,j;
 	int n;
 	
 	cout << "Enter n : ";
 	cin >> n;
 	
 	cout << endl;
 	
 	int *arr = new int[n];
 	
 	
 	cout << "\nEnter array elements : \n";
 	
 	for(i = 0; i < n; i++)
 	 {
 	 	 cin >> arr[i];
	  }
 	
 	cout << "\nArray before reversing : \n";
 	
 	for(i = 0; i < n; i++)
 	 {
 	 	 cout << arr[i] <<" ";
	  }
	  
	  //reversing logic
	  
	  i = 0;
	  j = n - 1;
	  
	  while(i < j)
	   {
	   	
	   	  temp = arr[i];
	   	  arr[i] = arr[j];
	   	  arr[j] = temp;
	   	
	   	  i++;
	   	  j--;
	   }
 	
 	cout << "\nArray after reversing : \n";
 	
 	for(i = 0; i < n; i++)
 	 {
 	 	 cout << arr[i] <<" ";
	  }
	  
	  delete arr; // deleting dynamically allocated memory.
 	
 	
 	
 	
 	return 0;
 }
