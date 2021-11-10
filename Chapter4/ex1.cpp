#include <iostream>
#include <string>
int main()
{
   using namespace std;
   unsigned int age;
   char grade;
   string first_name, last_name;
   cout << "What's your first name? ";
   getline(cin, first_name);
   cout << "What's your last name? ";
   getline(cin, last_name);
   cout << "What grade do you deserve? ";
   cin >> grade;
   cout << "What's your age? ";
   cin >> age;

   cout << "Name: " << last_name << ", " << first_name << endl;
   cout << "Grade: " << (char)(grade + 1) << endl;
   cout << "Age: " << age << endl;

   return 0;
}
