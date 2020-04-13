#include <iostream>
#include<map>
using namespace std;

int main() {
    map<string, double> marks;
    marks["Ajanta"] = 10.0; marks["Bobby"] = 15.0;marks["Abdul"] = 25.0;
    cout << "Size : " << marks.size () << endl;
    marks["Alex"] = 14.5;  marks["Ajanta"] = 11.0;
    cout << "Size : " << marks.size() << endl;
    return 0;
}
