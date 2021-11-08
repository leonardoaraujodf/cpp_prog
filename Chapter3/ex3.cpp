#include <iostream>

int main()
{
   using namespace std;
   unsigned int deg, min, arc;
   double result;
   cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point


   cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
   cout << "First, enter the degrees: ";
   cin >> deg;
   cout << "Next, enter the minutes of arc: ";
   cin >> min;
   cout << "Finally, enter the seconds of arc: ";
   cin >> arc;
   cout << deg << " degrees, " << min << " minutes, " << arc << " seconds = ";
   result = deg + min/60.0 + arc/(60.0*60.0);
   cout << result << " degress" << endl;
}
