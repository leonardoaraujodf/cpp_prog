#include <iostream>
#include <string>

struct CandyBar
{
   std::string name;
   float weight;
   unsigned int calories;
};

int main()
{
   using namespace std;
   CandyBar * snack = new CandyBar [3];

   snack[0].name = "Mocha Munch";
   snack[0].weight = 2.3;
   snack[0].calories = 350;

   snack[1].name = "Doritos";
   snack[1].weight = 0.5;
   snack[1].calories = 400;

   snack[2].name = "Cheetos";
   snack[2].weight = 0.6;
   snack[2].calories = 350;

   cout << "Name: " << snack[0].name << endl;
   cout << "Weight: " << snack[0].weight << endl;
   cout << "Calories: " << snack[0].calories << endl;

   cout << "Name: " << snack[1].name << endl;
   cout << "Weight: " << snack[1].weight << endl;
   cout << "Calories: " << snack[1].calories << endl;

   cout << "Name: " << snack[2].name << endl;
   cout << "Weight: " << snack[2].weight << endl;
   cout << "Calories: " << snack[2].calories << endl;

   delete [] snack;
   return 0;
}
