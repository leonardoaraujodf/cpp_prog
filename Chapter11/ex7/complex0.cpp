#include "complex0.h"

Complex Complex::operator+(const Complex & c) const
{
   return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator-(const Complex & c) const
{
   return Complex(real - c.real, imag - c.imag);
}

Complex Complex::operator-(void) const
{
   return Complex(-real, -imag);
}

Complex Complex::operator*(const Complex & c) const
{
   return Complex(real * c.real - imag * c.imag,
                  real * c.imag + imag * c.real);
}

Complex Complex::operator*(double v) const
{
   return Complex(real * v, imag * v);
}

Complex Complex::operator~(void) const
{
   return Complex(real, -imag);
}

std::ostream & operator<<(std::ostream & os, const Complex & c)
{
   os << "(" << c.real << "," << c.imag << "i)";
   return os;
}

std::istream & operator>>(std::istream & is, Complex & c)
{
   using std::cout;

   cout << "real: ";
   if(!(is >> c.real))
      return is;

   cout << "imaginary: ";
   if(!(is >> c.imag))
      return is;

   return is;
}
