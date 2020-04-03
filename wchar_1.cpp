/* 
Wide char is similar to char data type, except that wide char take up twice the space and can take on much larger values as a result.
char can take 256 values which corresponds to entries in the ASCII table. On the other hand, wide char can take on 65536 values which
corresponds to UNICODE values which is a recent international standard which allows for the encoding of characters for virtually all 
languages and commonly used symbols.

Just like the type for character constants is char, the type for wide character is wchar_t.
This data type occupies 2 or 4 bytes depending on the compiler being used.
Mostly the wchar_t datatype is used when international languages like Japanese are used.

L is the prefix for wide character literals and wide-character string literals which tells the compiler that that the char or string is of type wide-char.
*/



#include <iostream> 
using namespace std; 
  
int main() 
{ 
    wchar_t w  = L'A';
    cout << "Wide character value:: " << w << endl ; 
    cout << "Size of the wide char is:: " << sizeof(w)<< endl ;
    
    // wide-char type array string 
    char carray[] = "Nilesh Patel cpp training" ;
    cout << "Size of the char array is " <<sizeof(carray)<< endl;
    wchar_t waname[] = L"Nilesh Patel cpp training" ;
    wcout << waname << endl; 
    
    cout << "Size of the wide char array is " <<sizeof(waname); 
    
    return 0; 
}
