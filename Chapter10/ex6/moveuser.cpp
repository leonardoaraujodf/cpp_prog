#include <iostream>

#include "move.h"

int main()
{
   Move m1;
   Move m2(2, 5);
   m1.showmove();
   m2.showmove();
   m1.reset(1, 1);
   m1.showmove();
   Move m3 = m1.add(m2);
   m3.showmove();
   return 0;
}
