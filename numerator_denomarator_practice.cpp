#include <iostream>

using namespace std;

struct rational { 
   int numerator; 
   int denominator; 
};

bool isEqual(rational num1, rational num2)
{
  if (num1.numerator/num1.denominator == num2.numerator/num2.denominator)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
   bool result; 
   struct rational num1, num2; 
   
    
   cout << "Enter Details of Number 1 " << endl; 
   cout << "Enter Numerator :" << endl; 
   cin >> num1.numerator; 
   cout << "Enter Denominator :" << endl; 
   cin >> num1.denominator; 
   cout << "Enter Details of Number 2 " << endl; 
   cout << "Enter Numerator :" << endl; 
   cin >> num2.numerator; 
   cout << "Enter Denominator :" << endl; 
   cin >> num2.denominator; 
   result = isEqual(num1, num2);     //to check rational 'num1' is equal to rational 'num2' 
   if(result == true) {
      cout << "Both rational numbers are equal" << endl;
   }
   else {
      cout << "Both rational numbers are not equal" << endl;    
   }

  return 0;
}

