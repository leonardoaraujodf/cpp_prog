// listing 5.7 - plus_one.cpp -- the increment operator
#include <iostream>
int main()
{
   using std::cout;
   int a = 20;
   int b = 20;
   cout << "a = " << a << ": b = " << b << "\n";
   cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
   cout << "a = " << a << ": b = " << b << "\n";
   return 0;
}
