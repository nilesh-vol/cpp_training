

// Main function of the C++ program.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector< int > intVec;
    cout << "Initial size: " << intVec.size()<< endl  ;
    
    for (int i = 0; i < 5; i++) {
	 intVec.push_back(i);
	  }
	  
    cout << "Final size: " << intVec.size()<< endl  ;
    
    intVec.pop_back();
    
    cout << "Size after pop back: " << intVec.size() << endl;
    
    for (int i = 0; i < 4; i++) { 
        cout << intVec.at(i) << " ";} 
    
    return 0;
}
