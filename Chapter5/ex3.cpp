#include <iostream>

int main()
{
   using namespace std;
   long sum = 0, number;

   do
   {
      cout << "Insert a number: ";
      cin >> number;
      sum += number;
      cout << "Summation: " << sum << endl;
   }
   while( number != 0 );


   return 0;
}
