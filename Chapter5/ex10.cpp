#include <iostream>

int main()
{
   using namespace std;
   unsigned int rows;
   cout << "Enter number of rows: ";
   cin >> rows;
   for(unsigned int i = 0; i < rows; i++)
   {
      for(unsigned int k = 0; k < rows-i-1; k++)
         cout << ".";

      for(unsigned int k = 0; k < i+1; k++)
         cout << "*";
      cout << endl;
   }
   return 0;
}
