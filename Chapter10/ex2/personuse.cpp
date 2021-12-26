#include <iostream>

#include "person.h"

int main()
{
   Person one;
   Person two("Smythecraft");
   Person three("Dimwiddy", "Sam");
   one.show();
   one.formal_show();
   two.show();
   two.formal_show();
   three.show();
   three.formal_show();
   return 0;
}
