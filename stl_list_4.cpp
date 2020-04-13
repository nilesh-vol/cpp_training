
#include <iostream>
#include <list>
using namespace std;
int main() {
    list<string> names;
    names.push_front("Abdul");
    names.push_front ("Ajanta");
    names.push_front ("Bobby");
    list<string>::reverse_iterator rit;
    for (rit = names.rbegin();  rit != names.rend(); rit++)  {
        cout<< *rit << ", ";
    }
    return 0;
}

