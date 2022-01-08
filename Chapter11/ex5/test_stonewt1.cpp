#include <iostream>
#include "stonewt1.h"

int main()
{
   using namespace std;
   Stonewt w1(8);
   Stonewt w2(5, 10);
   Stonewt w3(90, 0, Stonewt::INTEGER_POUNDS);
   Stonewt w4(150, .60, Stonewt::POUNDS);

   cout << w1;
   cout << w2;
   cout << w3;
   cout << w4;
   return 0;
}
