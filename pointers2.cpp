#include<iostream>
using namespace std;

class Student {
	string name;
	public:
		Student(){
			name = "Shahid Khan";
		}
		
		void getName(){
			cout<<name;
		}
};

int main(){
	
	Student *ptr = new Student();
	ptr->getName();
	
	cout<<"References: Alias for a variable means another name that refers to the same variable."<<endl;
	int x = 20;
	int& y = x;
	
	// Changing y changes x and changing x changes.
	// A variable alias in C++ is created using a reference, and it allows two variable names to refer to the same memory location.
	// We can place the & sign with data type or with a variable while creating a reference. 
	// However, the standard practice is to use the sign along with the data type.
	
	int a = 10;
	int b = 20;
	
	int& ref = a; // (lvalue references)   // ref is now an alias for a
	ref = b;        // this does NOT make ref refer to b
	b = 30;
	ref = 33;       // So it means that the ref here will be bound to variable a. |In contrast the address stored by a pointer can be changed.
	  				// A reference is like a permanent nickname — once given, it cannot be given to someone else.
	
	cout<<a<<endl;
	cout<<b<<endl;
	
	int&& rref = 3; // (rvalue reference)
	rref = 5;
	
	
	
	return 0;
}
