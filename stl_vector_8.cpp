


// Main function of the C++ program.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector< int > intVec;
    
    for (int i = 0; i < 5; i++) {
	 intVec.push_back(i); 
	 }
	 
    for (int i = 0; i < 5; i++) { 
    
        cout << intVec.at(i) << " ";
    }   
    
    cout << endl; 
    
    vector< int >::iterator it = intVec.begin() + 2;
    
    intVec.insert(it, 0);
    
    cout << "Size after insert: " << intVec.size() << endl;
    
    for (int i = 0; i < intVec.size();  i++) {
        cout << intVec.at(i) << " ";
    }
    
    cout << endl;
    it = intVec.begin() + 3;  intVec.erase(it);
    
    cout<< "Size after delete: " << intVec.size() << endl;
    
    for (int i= 0; i< intVec.size(); i++) { 
        cout << intVec.at(i) << " ";}
        cout << endl;
    }
    
    
