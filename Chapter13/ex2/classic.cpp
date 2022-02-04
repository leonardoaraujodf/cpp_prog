#include <iostream>
#include <cstring>
#include "classic.h"

Classic::Classic(const char * p, const char * s1, const char * s2, int n, double x)
       : Cd(s1, s2, n, x)
{
   unsigned int len = std::min(strlen(p) + 1, 
                      (long unsigned int) CLASSIC_PRIMARY_MAX_LEN);
   primary = new char[len];
   strncpy(primary, p, len - 1);
   primary[len - 1] = '\0';
}

Classic::Classic(const char * p, Cd & cd) : Cd(cd)
{
   unsigned int len = std::min(strlen(p) + 1, 
                      (long unsigned int) CLASSIC_PRIMARY_MAX_LEN);
   primary = new char[len];
   strncpy(primary, p, len - 1);
   primary[len - 1] = '\0';
}

Classic::Classic(const Classic & cs) : Cd(cs)
{
   primary = new char[strlen(cs.primary) + 1];
   strcpy(primary, cs.primary);
}

Classic::~Classic()
{
   delete [] primary;
}

void Classic::Report() const
{
   Cd::Report();
   std::cout << "Primary: " << primary << std::endl;
}

Classic & Classic::operator=(const Classic & cs)
{
   unsigned int len = std::min(strlen(cs.primary) + 1, 
                      (long unsigned int)CLASSIC_PRIMARY_MAX_LEN);
   if(this == &cs)
      return *this;
   Cd::operator=(cs);

   delete [] primary;
   primary = new char[len];
   strncpy(primary, cs.primary, len - 1);
   primary[len - 1] = '\0';
   return *this;
}
