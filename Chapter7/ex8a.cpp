// Exercise 8 - Part A
#include <iostream>
#include <cstring>

// constant data
const int Seasons = 4;
const char * Snames[Seasons] = 
{"Spring", "Summer", "Fall", "Winter"};

// function to modify array object
void fill(double * pa);

// function that uses array object without modifying it
void show(const double * da);

int main()
{
   double expenses[Seasons];
   fill(expenses);
   show(expenses);
   return 0;
}

void fill(double * pa)
{
   using namespace std;
   for (int i = 0; i < Seasons; i++)
   {
      cout << "Enter " << Snames[i] << " expenses: ";
      cin >> pa[i];
   }
}

void show(const double * da)
{
   using namespace std;
   double total = 0.0;
   cout << "\nEXPENSES\n";
   for (int i = 0; i < Seasons; i++)
   {
      cout << Snames[i] << ": $" << da[i] << endl;
      total += da[i];
   }
   cout << "Total Expenses: $" << total << endl;
}
