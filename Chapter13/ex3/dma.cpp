// Listing 13.15
// dma.cpp -- dma class methods

#include "dma.h"
#include <cstring>

abcDMA::abcDMA(const char * l, int r)
{
   label = new char[std::strlen(l) + 1];
   std::strcpy(label, l);
   rating = r;
}

abcDMA::abcDMA(const abcDMA & a)
{
   label = new char[std::strlen(a.label) + 1];
   std::strcpy(label, a.label);
   rating = a.rating;
}

abcDMA::~abcDMA()
{
   delete [] label;
}

void abcDMA::ViewLabel() const
{
   std::cout << "Label: " << label << std::endl;
}

void abcDMA::ViewRating() const
{
   std::cout << "Rating: " << rating << std::endl;
}

abcDMA & abcDMA::operator=(const abcDMA & a)
{
   if (this == &a)
      return *this;
   delete [] label;
   label = new char[std::strlen(a.label) + 1];
   std::strcpy(label, a.label);
   rating = a.rating;
   return *this;
}

std::ostream & operator<<(std::ostream & os, const abcDMA & a)
{
   os << "Label: " << a.label << std::endl;
   os << "Rating: " << a.rating << std::endl;
   return os;
}

// baseDMA methods
baseDMA::baseDMA(const char * l, int r) : abcDMA(l, r) { }

baseDMA::baseDMA(const baseDMA & rs) : abcDMA(rs) { }

void baseDMA::View() const
{
   ViewLabel();
   ViewRating();
}

std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
   os << (const abcDMA &) rs;
   return os;
}

// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r) : abcDMA(l, r)
{
   std::strncpy(color, c, COL_LEN - 1);
   color[COL_LEN - 1] = '\0';
}

void lacksDMA::View() const
{
   ViewLabel();
   ViewRating();
   std::cout << "Color: " << color << std::endl;
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & ls)
{
   os << (const abcDMA &) ls;
   os << "Color: " << ls.color << std::endl;
   return os;
}

// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r) : abcDMA(l, r)
{
   style = new char[std::strlen(s) + 1];
   std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs) : abcDMA(hs) // invoke base class copy constructor
{
   style = new char[std::strlen(hs.style) + 1];
   std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
   delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
   if (this == &hs)
      return *this;
   abcDMA::operator=(hs); // copy base portion
   delete [] style; // prepare for new style
   style = new char[std::strlen(hs.style) + 1];
   std::strcpy(style, hs.style);
   return *this;
}

void hasDMA::View() const
{
   ViewLabel();
   ViewRating();
   std::cout << "Style: " << style << std::endl;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & hs)
{
   os << (const abcDMA &) hs;
   os << "Style: " << hs.style << std::endl;
   return os;
}
