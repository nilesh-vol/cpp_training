
// Main function of the C++ program.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector< int > intVec(5);
    int index;
    
    for (int i = 0; i < 5; i++) {
	 intVec.at(i) = i; 
	 }
	 
    cout << "Front element is: " << intVec.front()<< endl  ;
    cout << "Back element is: " << intVec.back()<< endl  ;
    
    return 0;
}


