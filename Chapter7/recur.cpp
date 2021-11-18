// listing 7.16 - recur.cpp -- using recursion
#include <iostream>
void countdown(unsigned int n);

int main()
{
   countdown( 4 );
   return 0;
}

void countdown(unsigned int n)
{
   using namespace std;
   cout << "Counting down..." << n << endl;
   if (n > 0)
      countdown(n - 1); // function calls itself
   cout << n << ": Kaboom!\n";
}
