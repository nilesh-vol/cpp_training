#include <iostream>
#include <list>
using namespace std;
int main() {
    list<string> names;
    names.push_front("Abdul");
    names.push_front ("Ajanta");
    names.push_front ("Bobby");
    list<string>::iterator it;
    for (it = names.begin();  it != names.end(); it++)  {
        cout<< *it << ", ";
    }
    return 0;
}
