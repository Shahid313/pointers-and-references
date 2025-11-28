#include<iostream>
using namespace std;

//1. Pass by reference function declaration
void changeValue(int&);

//2. pass by constant function declaration
//void swap(const int& a, const int& b);
int add(const int&, const int&);

//3. Pass by pointers
void swap(int*, int*);

int main(){
	
	int x = 3;
	cout<<"Before pass by reference: "<<x<<endl<<endl;
	changeValue(x);
	
	cout<<"After pass by reference: "<<x<<endl<<endl;
	
	int a = 5;
	int b = 10;
//	swap(a, b);
	cout<<"Sum of a and b: "<<add(a,b);
	
	cout<<endl<<endl<<"Pass by pointer"<<endl<<endl;
	int k = 1;
	int n = 2;
	swap(&k, &n);
	
	cout<<"k = "<<k<<endl;
	cout<<"n = "<<n<<endl;
	

	
	return 0;
}

//1. Pass by reference
void changeValue(int& value){ // It means that we are using reference as a parameter for our variable.
	value = 5;
}

//2. pass by constant reference: when the variables do not need to change then we pass them as const references
//void swap(const int& a, const int& b){
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}

int add(const int& a, const int& b){
	return a+b;
}

//3. Pass by pointers
void swap(int* k, int* n) {
	int temp;
	
	temp = *k;
	*k = *n;
	*n = temp;
}
