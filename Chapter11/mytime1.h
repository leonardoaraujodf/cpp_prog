// Listing 11.4 - mytime1.h -- Time class after operator overloading
#ifndef MYTIME0_H_
#define MYTIME0_H_

class Time
{
private:
   int hours;
   int minutes;
public:
   Time();
   Time(int h, int m = 0);
   void AddMin(int m);
   void AddHr(int h);
   void Reset(int h = 0, int m = 0);
   Time operator+(const Time & t) const;
   void Show() const;
};
#endif
