#include <iostream>
using namespace std;

struct car {
   string manufacturer;
   unsigned int year;
};

int main()
{
   unsigned int number_cars;
   car * cars;

   cout << "Insert how many cars to catalog: ";
   cin >> number_cars;
   if(number_cars <= 0)
      return 0;

   cars = new car[number_cars];
   for (unsigned int i = 0; i < number_cars; i++)
   {
      cout << "Car #:" << i + 1 << endl;
      cout << "Please enter the make: ";
      cin.get();
      getline(cin, cars[i].manufacturer);
      cout << "Please enter the year made: ";
      cin >> cars[i].year;
   }

   cout << "Here is your collection:" << endl;
   for (unsigned int i = 0; i < number_cars; i++)
   {
      cout << cars[i].year << " " << cars[i].manufacturer << endl;
   }

   delete [] cars;

   return 0;
}
