// Listing 11.14 - Methods for the vector class
#include <cmath>
#include "vect.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
   // compute degrees in one radian
   const double Rad_to_deg = 45.0/atan(1);

   //
   // Private Methods
   //

   // calculates magnitude from x and y
   double Vector::mag(void) const
   {
      double mag;
      mag = sqrt(x * x + y * y);
      return mag;
   }

   double Vector::ang(void) const
   {
      double ang;
      if ((x == 0) || (y == 0))
         ang = 0;
      else
         ang = atan2(x, y);
      return ang;
   }

   // set x from polar coordinate 
   void Vector::set_x(double mag, double ang)
   {
      x = mag * cos(ang);
   }

   // set y from polar coordinate 
   void Vector::set_y(double mag, double ang)
   {
      y = mag * sin(ang);
   }

   //
   // Public methods
   //
   Vector::Vector()
   {
      x = y = 0;
      mode = RECT;
   }

   // Construct vector from rectangular coordinates if form is r
   // (the default) or else from polar coordinates if form is p
   Vector::Vector(double n1, double n2, Mode form)
   {
      mode = form;
      if (form == RECT)
      {
         x = n1;
         y = n2;
      }
      else if (form == POL)
      {
         set_x(n1, n2);
         set_y(n1, n2);
      }
      else
      {
         cout << "Incorret third argument to Vector() -- ";
         cout << "Vector set to 0\n";
         x = y = 0;
         mode = RECT;
      }
   }

   // Reset vector from rectangular coordinates if form is 
   // RECT (default) or else from polar coordinates if form
   // is POL.
   void Vector::reset(double n1, double n2, Mode form)
   {
      mode = form;
      if (form == RECT)
      {
         x = n1;
         y = n2;
      }
      else if (form == POL)
      {
         set_x(n1, n2);
         set_y(n1, n2);
      }
      else
      {
         cout << "Incorret third argument to Vector() -- ";
         cout << "Vector set to 0\n";
         x = y = 0;
         mode = RECT;
      }
   }

   Vector::~Vector()
   {
   }

   void Vector::polar_mode()
   {
      mode = POL;
   }

   void Vector::rect_mode()
   {
      mode = RECT;
   }

   Vector Vector::operator+(const Vector & b) const
   {
      return Vector(x + b.x, y + b.y);
   }

   Vector Vector::operator-(const Vector & b) const
   {
      return Vector(x - b.x, y - b.y);
   }

   Vector Vector::operator-() const
   {
      return Vector(-x, -y);
   }

   Vector Vector::operator*(double n) const
   {
      return Vector(x * n, y * n);
   }

   Vector operator*(double n, const Vector & a)
   {
      return a * n;
   }

   // display rectangular coordinates if mode is RECT,
   // else display POL coordinates if mode is POL.
   std::ostream & operator<<(std::ostream & os, const Vector & v)
   {
      if (v.mode == Vector::RECT)
      {
         os << "(x,y) = (" << v.x << "," << v.y << ")";
      }
      else if (v.mode == Vector::POL)
      {
         os << "(m,a) = (" << v.mag() << "," << v.ang() * Rad_to_deg << ")";
      }
      else
      {
         os << "Vector object mode is invalid!\n";
      }

      return os;
   }

} // end namespace VECTOR
