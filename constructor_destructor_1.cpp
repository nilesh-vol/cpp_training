/*

Constructors are of three types:

   Default Constructor
     Default constructor is the constructor which doesn't take any argument. It has no parameter.
     
   Parametrized Constructor
     These are the constructors with parameter. Using this Constructor you can provide different
	 values to data members of different objects, by passing the appropriate values as argument.

*/

#include <iostream>
using namespace std;


class Cube
{
    public:
    int side;
    int x, y;   //data members
 
    Cube()                      /* Default Constructor */
    {
        side = 10;
    }
    
    Cube(int x)                 /* Parametrized Constructor */
    {
        side=x;
    }

    ~Cube()
    {
        cout << "destructor called \n";
	}
	
};

int main()
{
    Cube c;
    cout << "default constructor "<< c.side <<"\n";
    
    Cube c1(15);
    cout << "Parametrized Constructor " << c1.side << "\n";
    
}


