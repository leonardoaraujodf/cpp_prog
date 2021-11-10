#include <iostream>
#include <cstring>

int main()
{
   using namespace std;
   const unsigned int name_max_len = 20;
   char first_name[name_max_len];
   char last_name[name_max_len];
   char full_name[2*name_max_len + 2] = { 0 }; // plus 2 because the program
   // inserts a comma and a space
   cout << "Enter your first name: ";
   cin.getline(first_name, name_max_len);
   cout << "Enter your last name: ";
   cin.getline(last_name, name_max_len);
   strncat(full_name, last_name, name_max_len);
   strncat(full_name, ", ", 3);
   strncat(full_name, first_name, name_max_len-1);
   full_name[2*name_max_len + 1] = '\0';
   cout << "Here's the information in a single string: " << full_name << endl;
   return 0;
}
