#include <iostream>

using namespace std;

struct rational { 
   int numerator; 
   int denominator; 
};

struct rational * reduce(struct rational *inputrational)
{
     int num1 = inputrational->numerator;
     int num2 = inputrational->denominator;
     int i=0;
     int gcd=0;
    
     for(i=1; i <= num1 && i <= num2; ++i)
     {
        if(num1%i==0 && num2%i==0)
            gcd = i;
     }
    
    inputrational->numerator = (inputrational->numerator)/gcd;
    inputrational->denominator = (inputrational->denominator)/gcd;
    
    return inputrational;
}

bool isEqual(rational num1, rational num2)
{
    struct rational *p_num1 = reduce(&num1);
    struct rational *p_num2 = reduce(&num2);
  
  
  if ((p_num1->numerator == p_num2->numerator) && (p_num1->denominator == p_num2->denominator))
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
