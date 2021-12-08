#include <iostream>
#include <iostream>
using namespace std;
#include <cstring> // for strlen(), strcpy()
struct stringy {
   char * str; // points to a string
   int ct; // length of string (not counting '\0')
};
// prototypes for set(), show(), and show() go here

int set(stringy & strgy, const char * str);
void show(stringy & strgy, const int n = 1);
void show(const char * str, const int n = 1);

int main()
{
   stringy beany;
   char testing[] = "Reality isn't what it used to be.";
   set(beany, testing); // first argument is a reference,
   // allocates space to hold copy of testing,
   // sets str member of beany to point to the
   // new block, copies testing to new block,
   // and sets ct member of beany
   show(beany); // prints member string once
   show(beany, 2); // prints member string twice
   testing[0] = 'D';
   testing[1] = 'u';
   show(testing); // prints testing string once
   show(testing, 3); // prints testing string thrice
   show("Done!");
   return 0;
}

int set(stringy & strgy, const char * s)
{
   unsigned int len;
   len = strlen(s);
   strgy.str = new char [len + 1];
   if(s == NULL)
   {
      std::cout << "Cannot allocate " << len + 1
                << " bytes!" << endl;
      return -1;
   }
   strcpy(strgy.str, s);
   strgy.ct = len;
   return 0;
}

void show(stringy & strgy, const int n)
{
   using namespace std;
   if(!strgy.ct)
      return;

   for(int i = 0; i < n; i++)
      cout << strgy.str << endl;

   delete [] strgy.str;
   strgy.ct = 0;
}

void show(const char * str, const int n)
{
   using namespace std;
   if(str == NULL)
      return;

   for(int i = 0; i < n; i++)
      cout << str << endl;
}
