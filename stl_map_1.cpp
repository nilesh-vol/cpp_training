// Main function of the C++ program.

#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, double> marks;
    string stName;
    double stMarks;
    marks["Ajanta"] = 10.0;  marks["Bobby"] = 15.0;  marks["Abdul"] = 25.0;
    while (true) {
        cout << "Give name of student: ";  
        cin >> stName; 
        if (stName== "end") { 
            cout << "Bye!!! "<< endl; 
            break;
        }
        else { 
            cout << "Give marks: "; 
            cin >> stMarks; 
            marks[stName] = stMarks ; 
        }
    }
    return 0;
}

