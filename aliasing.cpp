#include<iostream>
#include <cstdint>
using namespace std;
// Alias(Pointing to same memory).
// Strict aliasing rule:
// You will only access an object using a pointer of a compatible type.


int main(){
	// ALLOWED
//	double d = 3.14;
//	void* vp = &d;
//	double* dp = (double*)vp;
//	cout<<*dp;

//----------------------------------------------------
   // NOT ALLOWED
//   int* intPtr = (int*)&d;
//   cout<<*intPtr;

//-------------------------------------------------------
	
	
	return 0;
}
