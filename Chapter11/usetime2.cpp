// Listing 11.9 - usetime0.cpp -- using the third draft of the Time class
// compile usetime2.cpp and mytime2.cpp together
#include <iostream>
#include "mytime2.h"

int main()
{
   using std::cout;
   using std::endl;
   Time wedding(4, 35);
   Time waxing(2, 47);
   Time total;
   Time diff;
   Time adjusted;

   cout << "wedding time = ";
   wedding.Show();
   cout << endl;

   cout << "waxing time = ";
   waxing.Show();
   cout << endl;

   cout << "total work time = ";
   total = wedding + waxing; // use operator+()
   total.Show();
   cout << endl;

   diff = wedding - waxing; // use operator-()
   cout << "wedding time - waxing time = ";
   diff.Show();
   cout << endl;

   adjusted = total * 1.5; // use operator*()
   cout << "adjusted work time = ";
   adjusted.Show();
   cout << endl;

   return 0;
}
