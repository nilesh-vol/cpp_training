#include <iostream>
#include <list>
using namespace std;
int main() {
    list<string> names;
    names.push_front("Abdul");
    names.push_front ("Ajanta");
    names.push_front ("Bobby");
    list<string>::iterator it = names.begin(); it++; 
    names.insert(it, "Alex");
    names.erase(it);
    cout << "Front element is: " << names.front() << endl;
    cout << "Back element is: " << names.back () << endl;
    return 0;
}

