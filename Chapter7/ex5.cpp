#include <iostream>

long long factorial(long long n)
{
   if(n > 0)
      return n * factorial(n - 1);
   else
      return 1;
}

int main()
{
   using namespace std;
   long long n;
   cout << "Factorial calculator" << endl;
   cout << "Enter a number or q to quit: ";
   while(cin >> n)
   {
      cout << "Factorial of " << n << " = ";
      cout << factorial(n) << endl;
      cout << "Enter a number or q to quit: ";
   }
   return 0;
}
