
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream
using namespace std;
int main () {

  stringstream ss;

  ss << 100<< ' '<< 200;

  int foo,bar;
  ss >> foo >> bar;

  cout << "foo: " << foo << '\n';
  cout << "bar: " << bar << '\n';
  
  int decimal = 61;
  stringstream my_ss;
  my_ss << hex << decimal;
  string res = my_ss.str();
  cout << "The hexadecimal value of 61 is: " << res;

  return 0;
}
