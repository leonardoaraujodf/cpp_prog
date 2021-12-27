// Listing 11.20
// stonewt.cpp -- Stonewt class methods + conversion functions
#include <iostream>
using std::cout;
#include "stonewt1.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
   stone = int(lbs) / Lbs_per_stn;
   pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
   pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
   stone = stn;
   pds_left = lbs;
   pounds = stn * Lbs_per_stn + lbs;
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

// show weight in pounds
void Stonewt::show_lbs() const
{
   cout << pounds << " pounds\n";
}

// show weight in stone format
void Stonewt::show_stn() const
{
   cout << stone << " stone, " << pds_left << " pounds\n";
}

// conversion functions
Stonewt::operator int() const
{
   return int(pounds + 0.5);
}

Stonewt::operator double() const
{
   return pounds;
}
