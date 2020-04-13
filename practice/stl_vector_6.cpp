


// Main function of the C++ program.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector< int > intVec;
    
    for (int i = 0; i < 5; i++) {
	 intVec.push_back(i);
	  }
	  
    intVec.push_back(-1);
    
    for (vector<int>::iterator it = intVec.begin(); it != intVec.end(); it++)  
	{
        cout << * it << " ";
	} 
    
    return 0;
}
