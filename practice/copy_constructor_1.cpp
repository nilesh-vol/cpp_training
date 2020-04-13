/*
Copy Constructor is a type of constructor which is used to create a copy of an already existing object of a class type.
It is usually of the form X (X&), where X is the class name. The compiler provides a default Copy Constructor to all the classes.

shallow copy constructor

  Both objects will point to same memory location.

Deep Copy Constructor

  Deep copy allocates separate memory for copied information. So the source and copy are different. Any changes made in one memory
  location will not affect copy in the other location
  
*/

#include<iostream>
#include<cstring>
using namespace std;
class Samplecopyconstructor
{
    private:
    int x, y;   //data members
    
    public:
    Samplecopyconstructor(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    
    /* Copy constructor */
    Samplecopyconstructor (const Samplecopyconstructor &sam)
    {
        x = sam.x+1;
        y = sam.y+1;
    }
    
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};

class CopyConstructor
{
    char *s_copy;
    public:
    	
    CopyConstructor(const char *str)
    {
        s_copy = new char[16]; //Dynamic memory allocation
        strcpy(s_copy, str);
    }
    /* concatenate method */
    void concatenate(const char *str)
    {
        strcat(s_copy, str); //Concatenating two strings
    }
    /* copy constructor */
    ~CopyConstructor ()
    { 
        delete [] s_copy;
    }
    void display()
    {
        cout<<" shallowcopy "<<s_copy<<endl;
    }
};


class deepCopyConstructor
{
    char *s_copy;
    public:
    deepCopyConstructor (const char *str)
    {
        s_copy = new char[16];  //Dynamic memory alocation
        strcpy(s_copy, str);
    }
    
    deepCopyConstructor (const deepCopyConstructor &str)
    {
        s_copy = new char[16]; //Dynamic memory alocation
        strcpy(s_copy, str.s_copy);
    }
    
    void concatenate(const char *str)
    {
        strcat(s_copy, str); //Concatenating two strings
    }

    ~deepCopyConstructor()
    { 
        delete [] s_copy;
    }

    void display()
    {
        cout<<s_copy<<endl;
    }
};
/* main function */
int main()
{
    Samplecopyconstructor obj1(10, 15);     // Normal constructor
    Samplecopyconstructor obj2 = obj1;      // Copy constructor
    cout<<"Normal constructor : ";
    obj1.display();
    cout<<"Copy constructor : ";
    obj2.display();
    
    CopyConstructor c1("Copy");
    CopyConstructor c2 = c1; //Copy constructor
    c1.display();
    c2.display();
    c1.concatenate("Constructor");    //c1 is invoking concatenate()
    c1.display();
    c2.display();                     //shallow copy
    
    deepCopyConstructor c3("Copy");
    deepCopyConstructor c4 = c3;    //copy constructor
    c3.display();
    c4.display();
    c3.concatenate("Constructor");    //c1 is invoking concatenate()
    c3.display();
    c4.display();
    return 0;
}
