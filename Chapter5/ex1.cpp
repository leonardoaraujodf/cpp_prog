#include <iostream>

int main()
{
   using namespace std;
   unsigned int first, second, sum = 0;
   cout << "Insert the first number: ";
   cin >> first;
   cout << "Insert the second number: ";
   cin >> second;
   for (unsigned int i = first; i <= second; i++)
   {
      sum += i;
   }
   cout << "Summation of numbers between " << first
        << " and " << second << " is " << sum << endl;
   return 0;
}
