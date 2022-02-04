// Listing 13.14
// dma.h -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class abcDMA
{
private:
   char * label;
   int rating;
public:
   abcDMA(const char * l = "null", int r = 0);
   abcDMA(const abcDMA & a);
   virtual ~abcDMA();
   void ViewLabel() const;
   void ViewRating() const;
   virtual void View() const = 0; // pure virtual function
   abcDMA & operator=(const abcDMA & a);
   friend std::ostream & operator<<(std::ostream & os,
                                    const abcDMA & a);
};

// Base Class Using DMA
class baseDMA : public abcDMA
{
public:
   baseDMA(const char * l = "null", int r = 0);
   baseDMA(const baseDMA & rs);
   virtual ~baseDMA() {};
   virtual void View() const;
   friend std::ostream & operator<<(std::ostream & os,
                                    const baseDMA & rs);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA : public abcDMA
{
private:
   enum {COL_LEN = 40};
   char color[COL_LEN];
public:
   lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
   virtual void View() const;
   friend std::ostream & operator<<(std::ostream & os,
                                    const lacksDMA & rs);
};

// derived class with DMA
class hasDMA : public abcDMA
{
private:
   char * style;
public:
   hasDMA(const char * s = "none", const char * l = "null", int r = 0);
   hasDMA(const hasDMA & hs);
   virtual ~hasDMA();
   virtual void View() const;
   hasDMA & operator=(const hasDMA & rs);
   friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};

#endif
