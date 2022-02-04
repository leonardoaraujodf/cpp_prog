// usedma.cpp -- inheritance, friends, and DMA
// compile with dma.cpp
#include <iostream>
#include "dma.h"

const unsigned int MAX_DMAS = 5;

static void viewDMAs(const abcDMA ** dmas, unsigned int len);

int main()
{
   using std::cout;
   using std::cin;
   using std::endl;
   
   const abcDMA * pDMAs[MAX_DMAS];
   for (unsigned int i = 0; i < MAX_DMAS; i++)
   {
      unsigned int choice;
      char label[100];
      int rating;
      char color[40];
      char style[100];
      cout << "Choose between:\n"
              "\t1) baseDMA\n"
              "\t2) lacksDMA\n"
              "\t3) hasDMA\n";
      cin >> choice;
      cin.get();

      if (choice > 3)
      {
         cout << "WRONG. Try again!\n";
         continue;
      }

      cout << "Insert label: ";
      cin.getline(label, 99);
      cout << "Insert rating: ";
      cin >> rating;
      cin.get();
      if (choice == 1)
      {
         pDMAs[i] = new baseDMA(label, rating);
      }
      else if (choice == 2)
      {
         cout << "Insert color: ";
         cin.getline(color, 39);
         pDMAs[i] = new lacksDMA(color, label, rating);
      }
      else if(choice == 3)
      {
         cout << "Insert style: ";
         cin.getline(style, 100);
         pDMAs[i] = new hasDMA(style, label, rating);
      }
   }

   cout << "Visualizing....\n";
   viewDMAs(pDMAs, MAX_DMAS);

   for(unsigned int i = 0; i < MAX_DMAS; i++)
   {
      delete pDMAs[i];
   }

   return 0;
}

static void viewDMAs(const abcDMA ** dmas, unsigned int len)
{
   for(unsigned int i = 0; i < len; i++)
   {
      dmas[i]->View();
   }
}
