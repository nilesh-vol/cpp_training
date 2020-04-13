#include <iostream>
#include<map>
using namespace std;

int main() {
    map<string, double> marks;
    marks["Ajanta"] = 10.0; marks["Bobby"] = 15.0; marks["Abdul"] = 25.0;
    map<string, double>:: iterator it = marks.find ("Abdul");
    marks.erase(it);  
    marks.erase ("Bobby");
    cout << "Size : " << marks.size() << endl;
    for (it = marks.begin(); it != marks.end(); it++)  {
        cout<< it ->first << " : " << it ->second << endl;
    }
    return 0;
}
