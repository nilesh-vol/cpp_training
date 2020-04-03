#include <iostream>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
    string name;  // Attribute (string variable)
    
    // Member Functions() 
    void print() 
    { 
       cout << "mystring is: " << myString << "\n"; 
    }
    
    // printname is not defined inside class definition 
    void printname();
    
};

// Definition of printname using scope resolution operator :: 
void MyClass::printname() 
{ 
    cout << "Name is: " << name;  
}

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "this is string";
  myObj.name = "Nilesh";
  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString << "\n";
  myObj.print();
  myObj.printname();
  return 0;
}
