#include <iostream>
using namespace std;

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double calculate(double x, double y, double (*pf)(double, double));

int main()
{
   double a, b;
   double (*pf[3])(double, double) = 
   {
      add,
      subtract,
      multiply
   };

   cout << "Insert two numbers: ";
   while(cin >> a >> b)
   {
      for(int i = 0; i < 3; i++)
      {
         cout << "Operation #" << i + 1
              << ": " << calculate(a, b, pf[i]) << endl;
      }
      cout << "Insert two numbers: ";
   }
   cout << "Done!\n";
   return 0;
}

double calculate(double x, double y, double (*pf)(double, double))
{
   return pf(x, y);
}

double add(double x, double y)
{
   return x + y;
}

double subtract(double x, double y)
{
   return x - y;
}

double multiply(double x, double y)
{
   return x * y;
}
