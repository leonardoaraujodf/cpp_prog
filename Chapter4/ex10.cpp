#include <iostream>
#include <array>

int main()
{
   using namespace std;
   array<float, 3> timings;
   cout << "Enter the first timing: ";
   cin >> timings[0];
   cout << "Enter the second timing: ";
   cin >> timings[1];
   cout << "Enter the third timing: ";
   cin >> timings[2];

   cout << "Time 1: " << timings[0] << endl;
   cout << "Time 2: " << timings[1] << endl;
   cout << "Time 3: " << timings[2] << endl;
   cout << "Average: " << (timings[0]+timings[1]+timings[2])/3 << endl;

   return 0;
}
