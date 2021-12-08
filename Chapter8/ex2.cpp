#include <iostream>
#include <cstring>

static const unsigned int BRAND_NAME_MAX = 50;

struct CandyBar {
   char brand_name[BRAND_NAME_MAX];
   double weight;
   int calories;
};

void SetCandyBar(CandyBar & c, const char b_name[] = "Millennium Munch",
                 double w = 2.85, int cal = 350);
void ShowCandyBar(const CandyBar & c);

int main()
{
   CandyBar c1, c2;
   SetCandyBar(c1);
   ShowCandyBar(c1);
   SetCandyBar(c2, "Nestle", 3, 450);
   ShowCandyBar(c2);
   return 0;
}

void SetCandyBar(CandyBar & c, const char b_name[], double w, int cal)
{
   strncpy(c.brand_name, b_name, BRAND_NAME_MAX);
   c.weight = w;
   c.calories = cal;
}

void ShowCandyBar(const CandyBar & c)
{
   using namespace std;
   cout.precision(2);
   cout.setf(ios::fixed, ios::floatfield);

   cout << "Candy bar info" << endl;
   cout << "--------------" << endl;
   cout << "Brand name: " << c.brand_name << endl;
   cout << "Weight: " << c.weight << endl;
   cout << "Calories: " << c.calories << endl;
   cout << "--------------" << endl;
}
