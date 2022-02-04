#include <iostream>
#include <cstring>
#include "classic.h"

Classic::Classic() : Cd()
{
}

Classic::Classic(const char * p, const char * s1, const char * s2, int n, double x)
       : Cd(s1, s2, n, x)
{
   strncpy(primary, p, CLASSIC_PRIMARY_MAX_LEN);
}

Classic::Classic(const char * p, Cd & cd) : Cd(cd)
{
   strncpy(primary, p, CLASSIC_PRIMARY_MAX_LEN);
}

Classic::Classic(const Classic & cs) : Cd(cs)
{
   strncpy(primary, cs.primary, CLASSIC_PRIMARY_MAX_LEN);
}

Classic::~Classic()
{
}

void Classic::Report() const
{
   Cd::Report();
   std::cout << "Primary: " << primary << std::endl;
}

Classic & Classic::operator=(const Classic & cs)
{
   if(this == &cs)
      return *this;
   Cd::operator=(cs);
   strncpy(primary, cs.primary, CLASSIC_PRIMARY_MAX_LEN);
   return *this;
}
