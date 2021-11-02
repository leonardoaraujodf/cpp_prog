#include <iostream>

unsigned int years2months(unsigned int years);

int main()
{
   using namespace std;
   unsigned int age_years;
   cout << "Enter your age: ";
   cin >> age_years;
   cout << "Your age in months is " << years2months(age_years) << endl;
   return 0;
}

unsigned int years2months(unsigned int years)
{
   return 12 * years;
}
