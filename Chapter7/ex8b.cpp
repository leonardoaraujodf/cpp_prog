// Exercise 8 - Part B
#include <iostream>
#include <cstring>

// constant data
const int Seasons = 4;

struct expenses {
   double value[Seasons];
};

const char * Snames[Seasons] = 
{"Spring", "Summer", "Fall", "Winter"};

// function to modify array object
void fill(expenses * pa);

// function that uses array object without modifying it
void show(const expenses * da);

int main()
{
   expenses exp;
   fill(&exp);
   show(&exp);
   return 0;
}

void fill(expenses * pa)
{
   using namespace std;
   for (int i = 0; i < Seasons; i++)
   {
      cout << "Enter " << Snames[i] << " expenses: ";
      cin >> pa->value[i];
   }
}

void show(const expenses * da)
{
   using namespace std;
   double total = 0.0;
   cout << "\nEXPENSES\n";
   for (int i = 0; i < Seasons; i++)
   {
      cout << Snames[i] << ": $" << da->value[i] << endl;
      total += da->value[i];
   }
   cout << "Total Expenses: $" << total << endl;
}
