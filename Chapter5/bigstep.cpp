// listing 5.5 - bigstep.cpp -- count as directed
#include <iostream>
int main()
{
   using std::cout; // a using declaration
   using std::cin;
   using std::endl;
   int by;
   cout << "Enter a integer: ";
   cin >> by;
   cout << "Couting by " << by << "s:\n";
   for (int i = 0; i < 100; i = i + by)
      cout << i << endl;

   return 0;
}
