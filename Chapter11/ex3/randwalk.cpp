// Listing 11.15
// randwalk.cpp -- using Vector class
// Compile with the vect.cpp file

#include <iostream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime> // time() prototype
#include "vect.h"

int main()
{
   using namespace std;
   using VECTOR::Vector;
   srand(time(0)); // seed random-number generator
   double direction;
   Vector step;
   Vector result(0.0, 0.0);
   double maximum;
   double minimum;
   unsigned long steps = 0;
   double steps_max;
   unsigned long max_step_length;
   double dstep;
   cout << "Enter the maximum number of steps (q to quit): ";
   while (cin >> steps_max)
   {
      cout << "Enter the step length: ";
      if (!(cin >> max_step_length))
         break;

      while(steps < steps_max)
      {
         direction = rand() % 360;
         dstep = rand() % max_step_length + 1;
         step.reset(dstep, direction, Vector::POL);
         if (!steps)
            maximum = minimum = step.magval();
         else if (step.magval() > maximum)
            maximum = step.magval();
         else if (step.magval() < minimum)
            minimum = step.magval();
         result = result + step;
         steps++;
      }

      cout << "After " << steps << " steps, the subject "
         "has the following location:\n";
      cout << result << endl;
      result.polar_mode();
      cout << "or\n" << result << endl;
      cout << "Average outward distance per step = "
           << result.magval()/steps << endl;
      cout << "Maximum step outward distance = "
           << maximum << endl;
      cout << "Minimum step outward distance = "
           << minimum << endl;
      steps = 0;
      result.reset(0.0, 0.0);
      cout << "Enter the maximum number of steps (q to quit): ";
   }

   cout << "Bye!\n";
   return 0;
}

