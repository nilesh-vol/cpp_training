


// Main function of the C++ program.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector< int > intVec(5,0);
    
    intVec.resize(10, -1);
    
    cout << "After resizing: " << intVec.size() << endl;
    
    for (int i = 0; i < 10; i++) 
    { 
        cout << intVec.at(i) << " ";
    }   
    
    cout << endl; 
    
    intVec.resize(7);  
    
    cout << "New size: " << intVec.size() << endl;
    
    for (int i= 0; i< 7; i++) { 
        cout << intVec.at(i) << ""; 
		}
    return 0;
}
