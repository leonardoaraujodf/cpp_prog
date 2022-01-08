// Listing 11.20
// stonewt.cpp -- Stonewt class methods + conversion functions
#include <iostream>
using std::cout;
#include "stonewt1.h"

Stonewt::Stonewt(double v1, double v2, Mode m)
{
   if (m == STONE) {
      mode = m;
      stone = v1;
      pds_left = v2;
      pounds = stone * Lbs_per_stn + pds_left;
   }
   else if ((m == INTEGER_POUNDS) || (m == POUNDS)) {
      mode = m;
      stone = int(v1) / Lbs_per_stn;
      pds_left = v2;
      pounds = v1 + v2;
   }
   else
   {
      m = STONE;
      cout << "Invalid mode. Setting default values.\n";
      stone = pds_left = pounds = 0;
   }
}

// default constructor, wt = 0
Stonewt::Stonewt()
{
   stone = pds_left = pounds = 0;
}

// destructor
Stonewt::~Stonewt()
{
}

void Stonewt::change_to_stone()
{
   mode = STONE;
}

void Stonewt::change_to_int_pounds()
{
   mode = INTEGER_POUNDS;
}

void Stonewt::change_to_pounds()
{
   mode = POUNDS;
}


std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
   if (st.mode == Stonewt::POUNDS)
      os << st.pounds << " pounds\n";
   else if (st.mode == Stonewt::INTEGER_POUNDS)
      os << int(st.pounds) << " pounds\n";
   else
      os << st.stone << " stone, " << st.pds_left << " pounds\n";

   return os;
}
