// listing 5.16 - textin1.cpp -- reading chars with a while loop
#include <iostream>
int main()
{
   using namespace std;
   char ch;
   int count = 0;
   cout << "Enter characters. Enter # to quit:\n";
   cin >> ch;
   while (ch != '#')
   {
      cout << ch;
      ++count;
      cin >> ch;
   }
}
