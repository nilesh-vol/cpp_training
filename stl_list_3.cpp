#include <iostream>
#include <list>
using namespace std;

int main(){
    list<string> names;
    names.push_back("Abdul");
    names.push_front("Ajanta");
    names.push_back("Bobby");
    names.push_front("Alex");
    
    list<string>::iterator it;
    for (it = names.begin();  it != names.end(); it++)  {
        cout<< *it << ", ";
    }
    cout << endl;
    
    names.pop_back();
    names.pop_front();
    names.pop_front();
    
    for (it = names.begin();  it != names.end(); it++)  {
        cout<< *it << ", ";
    }
    return 0;
}

