// listing 7.9 - strgfun.cpp -- functions with a string argument
#include <iostream>
unsigned int c_in_str(const char * str, char ch);
int main()
{
   using namespace std;
   char mm[15] = "minimum"; // string in an array
   char *wail = "ululate";

   unsigned int ms = c_in_str(mm, 'm');
   unsigned int us = c_in_str(wail, 'u');
   cout << ms << " m characters in " << mm << endl;
   cout << us << " u characters in " << wail << endl;
   return 0;
}

unsigned int c_in_str(const char * str, char ch)
{
   unsigned int count = 0;

   while (*str) // quit when *str is '\0'
   {
      if (*str == ch)
         count++;
      str++; // move pointer to next char
   }
   return count;
}
