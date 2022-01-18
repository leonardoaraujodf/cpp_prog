#include <iostream>
#include "cow.h"

int main()
{
   Cow c1;
   Cow c2("Booo", "Nma", 120.25);
   Cow c3("Abab", "Asho", 150.45);
   Cow c4(c3);
   c1.ShowCow();
   c2.ShowCow();
   c3.ShowCow();
   c4.ShowCow();
   c1 = c2;
   c1.ShowCow();
   c1 = c3;
   c1.ShowCow();
   c4 = c2;
   c2.ShowCow();
   return 0;
}
