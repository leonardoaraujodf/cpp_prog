#include <iostream>
#include <string>

struct pizza_data
{
   std::string company_name;
   float diameter;
   float weight;
};

int main()
{
   using namespace std;
   pizza_data * info = new pizza_data;
   cout << "Enter the pizza diameter: ";
   cin >> info->diameter;
   cout << "Enter the company name: ";
   cin.get();
   getline(cin, info->company_name);
   cout << "Enter the pizza weight: ";
   cin >> info->weight;

   cout << "Pizza Diameter: " << info->diameter << endl;
   cout << "Company name: " << info->company_name << endl;
   cout << "Pizza Weight: " << info->weight << endl;

   delete info;

   return 0;
}
