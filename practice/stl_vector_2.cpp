// Main function of the C++ program.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector< int > intVec(5);
    int index;
    for (int i = 0; i < 5; i++) { 
	    intVec[i] = i; 
	}
    cout << "Give an index: ";
    cin >> index;  
    cout << "Value at index " << index << " is "  << intVec.at(index)<< endl;
    return 0;
}

