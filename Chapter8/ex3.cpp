#include <iostream>
#include <cctype>

void toupper_string(std::string & s);
int main()
{
   using namespace std;
   string str;
   cout << "Enter a string (q to quit): ";
   getline(cin, str);
   while(str != "q")
   {
      toupper_string(str);
      cout << str << endl;
      cout << "Enter a string (q to quit): ";
      getline(std::cin, str);
   }
   return 0;
}

void toupper_string(std::string & s)
{
   for(unsigned int i = 0; i < s.length(); i++)
   {
      if(isalpha(s[i])) 
         s[i] = toupper(s[i]);
   }
}
