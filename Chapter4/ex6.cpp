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
   CandyBar snack[3] = {
      {
         .name = "Mocha Munch",
         .weight = 2.3,
         .calories = 350,
      },
      {
         .name = "Doritos",
         .weight = 0.5,
         .calories = 400,
      },
      {
         .name = "Cheetos",
         .weight = 0.6,
         .calories = 350,
      },
   };

   cout << "Name: " << snack[0].name << endl;
   cout << "Weight: " << snack[0].weight << endl;
   cout << "Calories: " << snack[0].calories << endl;

   cout << "Name: " << snack[1].name << endl;
   cout << "Weight: " << snack[1].weight << endl;
   cout << "Calories: " << snack[1].calories << endl;

   cout << "Name: " << snack[2].name << endl;
   cout << "Weight: " << snack[2].weight << endl;
   cout << "Calories: " << snack[2].calories << endl;
   return 0;
}
