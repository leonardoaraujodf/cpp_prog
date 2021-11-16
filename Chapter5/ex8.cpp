#include <iostream>
#include <cstring>
#include <cctype>

int main()
{
   using namespace std;
   unsigned int letters = 0, number_words = 0;
   char word[1000] = {0};
   char ch;
   cout << "Enter words (to stop, type the word done):" << endl;
   while(strncmp(word, "done", 5))
   {
      number_words++;
      cin.get(ch);
      while(isalpha(ch))
      {
         word[letters] = ch;
         letters++;
         cin.get(ch);
      }
      word[letters] = '\0';
      letters = 0;
   }
   cout << "You entered a total of " << number_words - 1 << " words." << endl;
   return 0;
}
