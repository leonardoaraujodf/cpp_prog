#include <iostream>

#include "list.h"

int main()
{
   using namespace std;
   List lst;
   unsigned int num;
   char ch;
   cout << "Please enter I to add a element to the list,\n"
        << "R to remove a element, or Q to quit: ";
   while (cin >> ch && toupper(ch) != 'Q')
   {
      while(cin.get() != '\n')
         continue;
      if (!isalpha(ch))
      {
         cout << '\a';
         continue;
      }

      switch(ch)
      {
         case 'I':
         case 'i':
            cout << "Enter a number to add: ";
            cin >> num;
            if (lst.isfull())
               cout << "List already full\n!";
            else
               if(!lst.insert(num))
               {
                  cout << "Element not added!\n";
               }
            break;
        case 'r':
        case 'R':
            if (lst.isempty())
               cout << "List already empty\n";
            else
            {
               cout << "Enter a number to remove: ";
               cin >> num;
               if (!lst.remove(num))
               {
                  cout << "Could not remove item!\n";
               }
            }
            break;
      }
      cout << "Please enter I to add a element to the list,\n"
           << "R to remove a element, or Q to quit: ";
   }

   cout << "Bye\n";

   return 0;
}
