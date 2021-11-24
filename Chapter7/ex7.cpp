#include <iostream>
const int Max = 5;

// function prototypes
int fill_array(double * start, double * end);
void show_array(const double * start, const double * end);
void revalue(double r, double * start, double * end);

int main()
{
   using namespace std;
   double properties[Max];

   int size = fill_array(properties, properties + Max);
   show_array(properties, properties + size);
   if (size > 0)
   {
      cout << "Enter revaluation factor: ";
      double factor;
      while (!(cin >> factor)) // bad input
      {
         cin.clear();
         while (cin.get() != '\n')
            continue;
         cout << "Bad input. Please enter a number: ";
      }
      revalue(factor, properties, properties + size);
      show_array(properties, properties + size);
   }
   cout << "Done.\n";
   return 0;
}

int fill_array(double * start, double * end)
{
   using namespace std;
   double temp;
   int i;
   double * itr;
   for (i = 0, itr = start; itr != end; itr++, i++)
   {
      cout << "Enter value #" << (i + 1) << ": ";
      cin >> temp;
      if (!cin) // bad input
      {
         cin.clear();
         while (cin.get() != '\n')
            continue;
         cout << "Bad input. Input process terminated.\n";
         break;
      }
      else if (temp < 0) // signal to terminate
         break;
      *itr = temp;
   }
   return i;
}

// the following function can use, but no alter,
// the array whose address is ar
void show_array(const double * start, const double * end)
{
   using namespace std;
   const double * itr;
   int i;
   for (i = 0, itr = start; itr != end; itr++, i++)
   {
      cout << "Property #" << (i + 1) << ": $";
      cout << *itr << endl;
   }
}

// multiplies each element of ar[] by r
void revalue(double r, double * start, double * end)
{
   double * itr;
   for (itr = start; itr != end; itr++)
      (*itr) *= r;
}
