
/*
As the variables declared as static are initialized only once as they are allocated space in separate static storage so, 
the static variables in a class are shared by the objects.
 
Static functions in a class: Just like the static data members or static variables inside the class,
static member functions also does not depend on object of class. We are allowed to invoke a static member 
function using the object and the ‘.’
*/
#include<iostream> 
using namespace std; 

class stu 
{ 
public: 
	static int i; 
	
	stu() 
	{ 
		i++;
	}; 
	
	    // static member function 
    static void printMsg() 
    { 
        cout<<"static function!"; 
    } 
}; 

int stu::i = 1; 

int main() 
{ 
	stu obj; 
	// prints value of i 
	cout << obj.i  <<"\n"; 
	
	stu obj1;
	// prints value of i 
	cout << obj1.i << "\n"; 
	
	// invoking a static member function 
    stu::printMsg(); 
} 

