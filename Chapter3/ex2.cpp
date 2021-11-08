#include <iostream>

int main()
{
   using namespace std;
   double height;
   double weight;
   double input;
   double bmi;
   const double FT2INCH = 12;
   const double INCH2MT = 0.0254;
   const double POUNDS2KG = 2.2;

   cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
   cout << "Insert your height in feet and inches. " << endl;
   cout << "Height (feet): ";
   cin >> input;
   height = FT2INCH * input;
   cout << "Height (inches): ";
   cin >> input;
   height += input;

   // Converting now to meters
   height = INCH2MT * height;
   cout << "Insert your weight in pounds: ";
   cin >> weight;
   weight = POUNDS2KG * weight;
   bmi = weight / (height * height);
   cout << "BMI: " << bmi << endl;

   return 0;
}
