#include <iostream>

using namespace std;

void display_time(unsigned int m, unsigned int h);

int main()
{
   unsigned int minutes, hours;

   cout << "Enter the number of hours: ";
   cin >> hours;
   cout << "Enter the number of minutes: ";
   cin >> minutes;
   display_time(hours, minutes);
   return 0;
}

void display_time(unsigned int m, unsigned int h)
{
   cout << "Time: " << h << ":" << m << endl;
}
