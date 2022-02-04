#include <iostream>
#include <cstring>
#include "cd.h"

Cd::Cd(const char * s1, const char * s2, int n, double x) 
{
   unsigned int len = std::min(strlen(s1) + 1,
                          (long unsigned int)PERFORMANCE_MAX);
   performance = new char[len];
   strncpy(performance, s1, len - 1);
   performance[len - 1] = '\0';

   len  = std::min(strlen(s2) + 1, 
                    (long unsigned int)LABEL_MAX);
   label = new char[len];
   strncpy(label, s2, len - 1);
   label[len - 1] = '\0';
   selections = n;
   playtime = x;
}

Cd::Cd(const Cd & d)
{
   performance = new char[strlen(d.performance) + 1];
   label = new char[strlen(d.label) + 1];

   strcpy(performance, d.performance);
   strcpy(label, d.label);
   selections = d.selections;
   playtime = d.playtime;
}


Cd::~Cd()
{
   delete [] performance;
   delete [] label;
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

   delete [] performance;
   delete [] label;

   performance = new char[strlen(d.performance) + 1];
   label = new char[strlen(d.label) + 1];

   strcpy(performance, d.performance);
   strcpy(label, d.label);
   selections = d.selections;
   playtime = d.playtime;
   return *this;
}
