#include <iostream>
#include <list>
using namespace std;
int main() {
    list<string> names;
    list<string> books (3, "Alice in Wonderland");
    list < int > numbers (10, -1);
    cout << "Sizes: ";
    cout << names.size () << " "<< books.size()  << " " << numbers.size ();
    cout << endl;
    return 0;
}
