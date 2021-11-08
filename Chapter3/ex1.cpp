#include <iostream>

int main()
{
   using namespace std;
   cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point

   const double ft2inc = 12.0;
   double height;

   cout << "Enter your height (inches): ______"
        << "\b\b\b\b\b\b";
   cin >> height;
   cout << "Your height in (foot): " << height/ft2inc << endl;

   return 0;
}
