#include <iostream>

double celsius_to_fah(double celsius);

int main()
{
   using namespace std;
   double temp_celsius;
   cout << "Please enter a Celsius value: ";
   cin >> temp_celsius;
   cout << temp_celsius << " degrees Celsius is "
        << celsius_to_fah(temp_celsius) << " degrees Fahrenheit." << endl;
   return 0;
}

double celsius_to_fah(double celsius)
{
   return (celsius * (9.0)/(5.0) + 32);
}
