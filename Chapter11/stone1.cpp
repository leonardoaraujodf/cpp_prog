// Listing 11.21
// stone1.cpp -- user-defined conversion functions
#include <iostream>
#include "stonewt1.h"

int main()
{
   using std::cout;
   Stonewt poppins(9, 2.8); // 9 stones, 2.8 pounds
   double p_wt = poppins;   // implicit conversion
   cout << "Convert to double => ";
   cout << "Poppins: " << p_wt << " pounds.\n";
   cout << "Convert to int => ";
   cout << "Poppins: " << int(poppins) << " pounds.\n";
   return 0;
}
