#include <iostream>

using namespace std;
void print_string(string str, int print_times_until_here )
{
   static int print_times = 0;
   if (print_times_until_here > 0)
   {
      for(int i = 0; i < print_times; i++)
         cout << str << " ";
   }
   else
      cout << str;
   print_times++;
}

int main()
{
   string str = "Leonardo";
   cout << "\nPrinting once: ";
   print_string(str, 0);
   cout << "\nPrinting once: ";
   print_string(str, 0);
   cout << "\nPrinting once: ";
   print_string(str, 0);
   cout << "\nPrinting more than once: ";
   print_string(str, 1);
   return 0;
}
