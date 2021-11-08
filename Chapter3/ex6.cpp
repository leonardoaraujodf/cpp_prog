#include <iostream>

int main()
{
   using namespace std;
   cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point

   double liters, kilometers;
   cout << "Enter the petrol in liters: ";
   cin >> liters;
   cout << "Enter the distance taken in kilometers: ";
   cin >> kilometers;
   cout << "Your vehicle comsuption is " << liters/kilometers * 100;
   cout << " lt/100km" << endl;
   return 0;
}
