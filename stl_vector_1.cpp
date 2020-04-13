// Main function of the C++ program.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector< int > intVec;
    vector<float> floatVec (20);
    vector<char>  charVec (5, 'a');
    
    cout << intVec.size () << " " << floatVec.size() << endl;
    for (int i = 0; i < 5; i++) {
        cout << charVec[i];
    }
    cout << endl;
    return 0;
}
