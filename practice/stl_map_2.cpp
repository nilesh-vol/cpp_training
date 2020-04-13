
#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, double> marks;
    string stName;
    double stMarks;
    while (true) {
        cout << "Give name of student: ";  
        cin >> stName; 
        if (stName== "end") {
            cout << "Bye!!! "<< endl; 
            break;
        }
        
        else { 
            cout << "Marks of " << stName<< " is: " << marks[stName] + 10 << endl;
        }
    }
    return 0;
}
