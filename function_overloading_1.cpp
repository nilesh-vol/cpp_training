#include <iostream> 
using namespace std; 
  
void fun(int i) { 
  cout << "int " << i << endl; 
} 
void fun(double  f) { 
  cout << "float " << f << endl; 
} 
void fun(char const *c) { 
  cout << "char* " << c << endl; 
} 
  
int main() { 
  fun(20); 
  fun(29.25); 
  fun("hello"); 
  return 0; 
}
