// Listing 11.19
// stonewt.h -- Revised definition for the Stonewt class

#ifndef _STONEWT1_H_
#define _STONEWT1_H_

class Stonewt
{
public:
   enum Mode { STONE, INTEGER_POUNDS, POUNDS };
private:
   enum { Lbs_per_stn = 14 }; // pounds per stone
   Mode mode; // internal Stonewt mode
   int stone; // whole stones
   double pds_left; // fractional pounds
   double pounds; // entire weight in pounds
public:
   Stonewt(double v1, double v2 = 0, Mode m = STONE);
   Stonewt(); // default constructor
   ~Stonewt();
   void change_to_stone(void);
   void change_to_int_pounds(void);
   void change_to_pounds(void);
   friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
};

#endif
