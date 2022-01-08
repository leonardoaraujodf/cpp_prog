// Exercise 1
// ex1.cpp -- using Vector class with files
// Compile with the vect.cpp file

#include <iostream>
#include <fstream>
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
   unsigned long steps = 0;
   double target;
   double dstep;
   ofstream fout;

   fout.open("randwalk.txt");
   cout << "Enter target distance (q to quit): ";
   while (cin >> target)
   {
      cout << "Enter the step length: ";
      if (!(cin >> dstep))
         break;

      fout << "Target distance: " << target
           << ", Step size: " << dstep << endl;

      while(result.magval() < target)
      {
         fout << steps << ": " << result << endl;
         direction = rand() % 360;
         step.reset(dstep, direction, Vector::POL);
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

      result.rect_mode();
      fout << "After " << steps << " steps, the subject "
         "has the following location:\n";
      fout << result << endl;
      result.polar_mode();
      fout << "or\n" << result << endl;
      fout << "Average outward distance per step = "
           << result.magval()/steps << endl;

      steps = 0;
      result.reset(0.0, 0.0);
      cout << "Enter target distance (q to quit): ";
   }

   cout << "Bye!\n";
   fout.close();
   return 0;
}

