#include <iostream>
#include <cstring>
#include "cd.h"

Cd::Cd(const char * s1, const char * s2, int n, double x) 
{
   strncpy(performance, s1, 50);
   strncpy(label, s2, 20);
   selections = n;
   playtime = x;
}

Cd::Cd(const Cd & d)
{
   strncpy(performance, d.performance, 50);
   strncpy(label, d.label, 20);
   selections = d.selections;
   playtime = d.playtime;
}

Cd::Cd()
{
   strncpy(performance, "Nully", 50);
   strncpy(label, "Nully", 20);
   selections = 0;
   playtime = 0;
}

Cd::~Cd()
{
}

void Cd::Report() const
{
   std::cout << "Performance: " << performance << std::endl;
   std::cout << "Label: " << label << std::endl;
   std::cout << "Selections: " << selections << std::endl;
   std::cout << "Playtime: " << playtime << std::endl;
}

Cd & Cd::operator=(const Cd & d)
{
   if (this == &d)
      return *this;
   strncpy(performance, d.performance, 50);
   strncpy(label, d.label, 20);
   selections = d.selections;
   playtime = d.playtime;
   return *this;
}
