#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, double> marks;
    marks["Ajanta"] = 10.0;  marks["Bobby"] = 15.0;  marks["Abdul"] = 25.0;
    map<string, double>::reverse_iterator rit;
    for (rit = marks.rbegin(); rit != marks.rend(); rit++)  {
        cout<< rit ->first << " : " << rit ->second << endl;
    }
return 0;
}
