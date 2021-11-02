#include <iostream>

double light2astro(double light_years);

int main()
{
   using namespace std;
   double light_years;
   cout << "Enter the number of light years: ";
   cin >> light_years;
   cout << light_years << " light years = "
        << light2astro(light_years)
        << " astronomical units." << endl;
   return 0;
}

double light2astro(double light_years)
{
   return 63240 * light_years;
}
