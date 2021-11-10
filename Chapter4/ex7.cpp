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
   pizza_data p_info;
   cout << "Enter the company name: ";
   getline(cin, p_info.company_name);
   cout << "Enter the pizza diameter: ";
   cin >> p_info.diameter;
   cout << "Enter the pizza weight: ";
   cin >> p_info.weight;

   cout << "Company name: " << p_info.company_name << endl;
   cout << "Pizza Diameter: " << p_info.diameter << endl;
   cout << "Pizza Weight: " << p_info.weight << endl;

   return 0;
}
