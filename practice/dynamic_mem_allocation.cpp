#include <iostream>
using namespace std;

int main () {
   double* pvalue  = NULL; // Pointer initialized with null
   pvalue  = new double;   // Request memory for the variable
 
   *pvalue = 29494.99;     // Store value at allocated address
   cout << "Value of pvalue : " << *pvalue << endl;

   delete pvalue;         // free up the memory.


   char* pvalue1  = NULL;         // Pointer initialized with null
   pvalue1  = new char[2];       // Request memory for the variable
   pvalue1[0]= 'a';
   pvalue1[1]= '\0';
   
   cout << "pvalue1 : " << pvalue1 << endl;
   delete [] pvalue1;
      
   return 0;
}
