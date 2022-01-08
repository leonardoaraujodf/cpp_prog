#ifndef _COMPLEX0_H
#define _COMPLEX0_H
#include <iostream>
class Complex {
   private:
      double real;
      double imag;
   public:
      Complex(){ real = imag = 0; };
      Complex(double r, double i) { real = r; imag = i; };
      Complex operator+(const Complex & c) const;
      Complex operator-(const Complex & c) const;
      Complex operator-(void) const;
      Complex operator*(const Complex & c) const;
      Complex operator*(double v) const;
      friend Complex operator*(double v, const Complex & c) { return c * v; };
      Complex operator~(void) const;
      friend std::ostream & operator<<(std::ostream & os, const Complex & c);
      friend std::istream & operator>>(std::istream & is, Complex & c);
};
#endif
