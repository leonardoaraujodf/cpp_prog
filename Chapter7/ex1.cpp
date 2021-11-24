#include <iostream>

double harmonic_mean(double x, double y);
int main(void)
{
   using namespace std;
   double mean;
   double x, y;
   cout << "Enter two numbers: " << endl;
   while( cin >> x >> y )
   {
      if((x == 0) || (y == 0))
         break;

      mean = harmonic_mean(x, y);
      cout << "Harmonic mean: " << mean << endl;
   }
   return 0;
}

double harmonic_mean(double x, double y)
{
   return (2.0 * x * y) / (x + y);
}
