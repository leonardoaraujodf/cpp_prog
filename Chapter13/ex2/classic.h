#ifndef _CLASSIC_H_
#define _CLASSIC_H_
#include "cd.h"

class Classic : public Cd
{
private:
   enum { CLASSIC_PRIMARY_MAX_LEN = 128 };
   char * primary;
public:
   Classic(const char * p = "Nully", const char * s1 = "Nully", 
           const char * s2 = "Nully", int n = 0, double x = 0);
   Classic(const char * p, Cd & cd);
   Classic(const Classic & cs);
   virtual ~Classic();
   virtual void Report() const;
   Classic & operator=(const Classic & cs);
};
#endif
