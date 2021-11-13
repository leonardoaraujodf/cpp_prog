// listing 5.2 - num_test.cpp -- use numeric test in for loop 
#include <iostream>
int main()
{
   using namespace std;
   int limit;
   int i;
   cout << "Enter the starting countdown value: ";
   cin >> limit;
   for (i = limit; i; i--) // quits when i is 0
      cout << "i = " << i << "\n";
   cout << "Done now that i = " << i << "\n";

   return 0;
}
