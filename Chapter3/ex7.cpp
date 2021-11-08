#include <iostream>

int main()
{
   using namespace std;
   cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
   const double KM100_IN_MILES = 62.14;
   const double GALLON_IN_LITERS = 3.875;
   double euro_consumption, us_consumption;
   cout << "Enter the consumption in European style (l/100km): ";
   cin >> euro_consumption;
   us_consumption =  KM100_IN_MILES/(euro_consumption/GALLON_IN_LITERS);
   cout << "Automobile comsumption in US. style (mpg): ";
   cout << us_consumption << endl;
   return 0;

}
