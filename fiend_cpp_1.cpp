/*
Friend Class A friend class can access private and protected members of other class in which it is declared as friend.
 It is sometimes useful to allow a particular class to access private members of other class.

Friend Function Like friend class, a friend function can be given special grant to access private and protected members. A friend function can be:
a) A method of another class
b) A global function

*/

#include <iostream> 
class A { 
private: 
    int a; 
  
public: 
    A() { a = 0; } 
    friend class B; // Friend Class 
}; 
  
class B { 
private: 
    int b; 
  
public: 
    void showA(A& x) 
    { 
        // Since B is friend of A, it can access 
        // private members of A 
        std::cout << "A::a=" << x.a; 
    } 
}; 

int main() 
{ 
    A a; 
    B b; 
    b.showA(a); 
    return 0; 
}  
