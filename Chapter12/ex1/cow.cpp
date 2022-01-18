#include <iostream>
#include <cstring>
#include "cow.h"

Cow::Cow()
{
   strcpy(name, "unamed");
   hobby = new char[1];
   hobby[0] = '\0';
   weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
   if(nm == nullptr)
      strcpy(name, "unamed");
   else
   {
      strncpy(name, nm, 20);
      if(strlen(nm) > 19)
         name[19] = '\0';
      else
         name[strlen(nm)] = '\0';
   }

   if(ho == nullptr)
   {
      hobby = new char[1];
      hobby[0] = '\0';
   }
   else
   {
      hobby = new char[strlen(ho) + 1];
      strcpy(hobby, ho);
   }
   weight = wt;
}

Cow::Cow(const Cow & c)
{
   strcpy(name, c.name);
   hobby = new char[strlen(c.hobby) + 1];
   strcpy(hobby, c.hobby);
   weight = c.weight;
}

Cow::~Cow()
{
   delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
   if(this == &c)
      return *this;
   delete [] hobby;
   strcpy(name, c.name);
   hobby = new char[strlen(c.hobby) + 1];
   strcpy(hobby, c.hobby);
   weight = c.weight;
   return *this;
}

void Cow::ShowCow() const // display all cow data
{
   std::cout << "Name: " << name << std::endl;
   std::cout << "Hobby: " << hobby << std::endl;
   std::cout << "Weight: " << weight << std::endl;
}
