// Definition: Pointers are the variables that store the memory address of other variables
#include<iostream>
using namespace std;

int main() {
	int x; // memory is allocated here. Memory is allocated on the stack when function begins.
	x = 10; // value is assigned here
	
	
	int var1 = 1; // 0x6ffe40 (0x means, the address is in hexa-decimal form).
	int var2 = 2;
	int var3 = 3;
	
	cout<<"Address of each variable: "<<endl;
	cout<<*(&var1+5)<<endl; 
	cout<<&var2<<endl;
	cout<<&var3<<endl;
	cout<<&x<<endl;
	
	cout<<"Dereferencing them: "<<endl;
	cout<<var1<<endl;
	cout<<var2<<endl;
	cout<<var3<<endl;
	
	cout<<endl<<endl;
	// ------------------------- Pointers -------------------------------
	int y = 13;
	int *ptr; // (It is good practice to initialize a pointer as soon as they are declared)
//	*ptr = &y; (Invalid conversion from int* to int [-fpermissive]
	ptr = &y;
	cout<<ptr<<endl<<endl;
	cout<<*ptr;
	cout<<endl<<endl;
	
	cout<<"Changing value pointed by pointers: "<<endl;
	int var = 5;
	int *ptrVar = &var;
	*ptrVar = 1;
	cout<<var;
	
	cout<<endl<<endl<<"Storing one pointer in another pointer: "<<endl;
	int n = 10;
	int *ptr1 = &n;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	cout<<***ptr3;
	
	cout<<endl<<endl<<"Working with array using pointer: "<<endl<<endl;
	int arr[5];
	int *arrPtr;
	arrPtr = arr;
	
//	int array[5];
//	
//	for(int i = 0; i < 5; i++){
//		cout<<"Enter the element at index: "<<i;
//		cin>>*(array + i);
//	}
//	
//	cout<<endl;
//	for(int i = 0; i < 5; i++){
//		cout<<array[i]<<endl;
//	}
	
	
	cout<<endl<<endl;
	
	cout<<"C++ allows us to allocate the memory dynamically in run time. This is known as dynamic memory allocation. We need to deallocate"<<endl;
	cout<<"the memory after no use with delete keyword and allocate with new keyword"<<endl<<endl;
	
	int *dynamic_pointer;
	dynamic_pointer = new int; // new keyword returns the address of memory location.
	*dynamic_pointer = 31;
	
	int *dynamic_pointer2 = new int{33}; // This approach is better because it avoids unintiallized pointers as UP results in undefined behavior.
	
	cout<<*(dynamic_pointer)<<endl;
	
	delete dynamic_pointer2;
	dynamic_pointer2 = nullptr;
	cout<<*(dynamic_pointer2);
	
	
	cout<<endl<<endl<<"C++ new and delete kewords with arrays: "<<endl<<endl;
	
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	int *ptrForArray;
	ptrForArray = new int[size];
	
	for(int i = 0; i< size; i++){
		cout<<"Enter element: "<< i + 1;
		cin>>*(ptrForArray + i);
	}
	
	
	for(int i = 0; i< size; i++){
		cout<<*(ptrForArray + i)<<endl;
	}
	
	delete[] ptrForArray;
	ptrForArray = nullptr;
	
	

	return 0;
}
