#include<iostream>
using namespace std;

//int* func();

//struct Student {
//	int age = 23;
//};

//class Student{
//	private:
//		int age;
//	public:
//		Student(int age){
//			this->age = age;
//		}
//		
//		void getAge(){
//			cout<<age;
//		}
//		
//};

//int add(int x, int y){
//	return x+y;
//}
void traversePtrToArray(int (*ptr)[5]){
	for(int i=0; i<sizeof((*ptr))/sizeof((*ptr)[0]); i++){
		cout<<(*ptr)[i]<<endl;
	}
}


int main(){
	// 1. Null pointer: A pointer that points nothing
//	int* ptr = nullptr;
//	cout<<*(ptr);
	// Advantages: 
	// 1)  To avoid dangling
	// 2) For safe initialization
	// 3) To indicate no object
	
	// 2. Void pointer: The pointer that can point to any data but cannot be dereferenced directly.
	// We will type-cast before dereferincing
	//	void *voidPtr;
	//	int x = 30;
	//	voidPtr = &x;
	//	cout<<*(static_cast<int*>(voidPtr));
		// Advantage:
	    // 1) For designing generic functions and memory allocators.
   
   // 3. Wild pointer: A pointer that points to an unknown location, can cause crashes
//   int* wildPtr;
//   cout<<*(wildPtr);
   
   // 4. Dangling pointer: A pointer that points to a memory which has been deleted.
	//   int* dangPtrVar = new int(5);
	//   delete dangPtrVar;
	//   cout<<*dangPtrVar;
	
	
   
//   int* ptrF;
//   ptrF = func();
//   cout<<*ptrF;
//   

// 5. Pointer constant types
   //1). Pointer to constant data: Data can't be changed through pointer in it. But address can be changed
//   int g = 11;
//   int h = 13;
//   const int* consPtr = &g;
//   consPtr = &h;
   
//   consPtr* = 13; not allowed

  //2). Constant pointer: Data can be changed but address can't be.
  
//  int l = 23;
//  int m = 5;
//  int* const constPtr2 = &l;
//  constPtr2 = &m; not allowed
//	*constPtr2 = 33;
//	
//	cout<<*constPtr2;

	//3). constant pointer to constant data: In which address and data both can't be changed.
//	int z = 33;
//	const int* const zee = &z;

  //6. pointer to pointer: Pointer that stores the address of another pointer
  
//  int x = 1;
//  int* ptr1 = &x;
//  int** ptr2 = &ptr1;
//  
//  cout<<**ptr2;

//7. Pointer to array: The pointer which stores the address of an array.
int arr[5] = {1,2,3,4,5};

int (*ptr)[5] = &arr;

traversePtrToArray(ptr);

//8. An array where each element is an array
//int a = 10, b = 20, c = 30;
//
//int* arr[3] = {&a, &b, &c};

//9. Pointer to structure: Used to access structure members

//Student s;
//
//Student* ptr = &s;
//
//cout<<ptr->age;

//10. This pointer: Available inside class member functions and points to current object.
   
//   Student s(23);
//   s.getAge();


//	11. Function pointer: Stores the address of function
// Advantages: Used in call back functions, event handling and poly-morphism.
//int (*ptr)(int, int) = &add;
//
//cout<<ptr(1,2);
	
	return 0;
}

//int* func(){
//		int x = 3;
//		return &x;
//	}
