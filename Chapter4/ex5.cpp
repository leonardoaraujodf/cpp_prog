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
   CandyBar snack = {
      .name = "Mocha Munch",
      .weight = 2.3,
      .calories = 350,
   };

   cout << "Name: " << snack.name << endl;
   cout << "Weight: " << snack.weight << endl;
   cout << "Calories: " << snack.calories << endl;
   return 0;
}
