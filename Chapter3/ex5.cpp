#include <iostream>

int main()
{
   using namespace std;

   long long world_population, us_population;

   cout << "Enter the world's population: ";
   cin >> world_population;
   cout << "Enter the US population: ";
   cin >> us_population;
   cout << "The population of the US is " << (us_population*100.0)/world_population;
   cout << "\% of the world population." << endl;
   return 0;
}
