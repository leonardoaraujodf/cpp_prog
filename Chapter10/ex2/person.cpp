#include <iostream>
#include <cstring>
#include "person.h"

Person::Person(const std::string & ln, const char * fn)
{
   lname = ln;
   strncpy(fname, fn, LIMIT - 1);
   fname[LIMIT - 1] = '\0';
}

void Person::show() const
{
   std::cout << fname << " " << lname << std::endl;
}

void Person::formal_show() const
{
   std::cout << lname << " " << fname << std::endl;
}
