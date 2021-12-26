#include <iostream>
#include "move.h"

Move::Move(double a, double b)
{
   this->x = a;
   this->y = b;
}

void Move::showmove() const
{
   std::cout << "x = " << x;
   std::cout << " y = " << y << std::endl;
}

Move Move::add(const Move & m) const
{
   Move a;
   a.x = this->x + m.x;
   a.y = this->y + m.y;
   return a;
}

void Move::reset(double a, double b)
{
   this->x = a;
   this->y = b;
}
