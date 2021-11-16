#include <iostream>
#include <string>

int main()
{
   using namespace std;
   unsigned int number_words = 0;
   string word;
   char ch;
   cout << "Enter words (to stop, type the word done):" << endl;
   while (word != "done")
   {
      number_words++;
      cin.get(ch);
      word.clear();
      while(isalpha(ch))
      {
         word += ch;
         cin.get(ch);
      }
   }
   cout << "You entered a total of " << number_words - 1 << " words." << endl;
   return 0;
}
