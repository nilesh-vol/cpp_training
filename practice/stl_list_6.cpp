#include <iostream>
#include <list>
using namespace std;
int main() {
    list<string> names;
    names.push_front("Abdul");
    names.push_front ("Ajanta");
    names.push_front ("Bobby");
    list<string>::iterator it = names.begin(); it++; 
    names.insert (it, "Alex");  
    it --;  
    names.insert(it, 2, "Avi");
    for (it = names.begin();  it != names.end(); it++)  {
        cout<< *it << ", ";
    }
    return 0;
}
