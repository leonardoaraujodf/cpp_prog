#include <iostream>

#include "stack.h"

void get_costumer_info(customer & c)
{
   using namespace std;
   cout << "Enter the costumer name: ";
   cin.getline(c.fullname, CUSTOMER_MAX_NAME);
   cout << "Enter costumer payment: ";
   cin >> c.payment;
}

int main()
{
   using namespace std;
   double total = 0;
   char ch;
   Stack st;
   customer c;

   cout << "Please enter A to add a customer,\n"
        << "P to remove and Q to quit.\n";
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
         case 'A':
         case 'a':
            if (st.isfull())
               cout << "Stack already full\n";
            else
            {
               get_costumer_info(c);
               st.push(c);
            }
            break;
         case 'P':
         case 'p':
            if (st.isempty())
               cout << "Stack already empty\n";
            else
            {
               st.pop(c);
               total += c.payment;
               cout << "Total = " << total << endl; 
            }
            break;
      }
      cout << "Please enter A to add a customer,\n"
           << "P to remove and Q to quit.\n";
   }

   cout << "Bye\n";
   return 0;
}
