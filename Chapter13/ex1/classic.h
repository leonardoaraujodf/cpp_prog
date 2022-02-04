#ifndef _CLASSIC_H_
#define _CLASSIC_H_
#include "cd.h"

class Classic : public Cd
{
private:
   enum { CLASSIC_PRIMARY_MAX_LEN = 128 };
   char primary[CLASSIC_PRIMARY_MAX_LEN];
public:
   Classic();
   Classic(const char * p, const char * s1, const char * s2, int n, double x);
   Classic(const char * p, Cd & cd);
   Classic(const Classic & cs);
   virtual ~Classic();
   virtual void Report() const;
   Classic & operator=(const Classic & cs);
};
#endif
