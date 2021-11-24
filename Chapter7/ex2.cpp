#include <iostream>

const int TOTAL_SCORES = 10;

void display_scores(int * scores);
void fill_scores(int * scores);
double average(int * scores);

int main()
{
   using namespace std;
   int scores[TOTAL_SCORES] = { 0 };
   double av;
   fill_scores(scores);
   display_scores(scores);
   av = average(scores);
   cout << "Average: " << av << endl;
   return 0;
}

void fill_scores(int * scores)
{
   using namespace std;
   if (scores == NULL)
   {
      cout << "ERROR! Null Pointer!" << endl;
      return;
   }
   cout << "Please insert " << TOTAL_SCORES << " scores." << endl;
   for (int i = 0; i < TOTAL_SCORES; i++)
   {
      cout << "Insert score number " << i + 1 << " (negative number to terminate): ";
      if (cin >> scores[i])
      {
         if(scores[i] < 0)
         {
            break;
         }
      }
      else
      {
         cout << "Try again" << endl;
         --i;
      }
   }
}

void display_scores(int * scores)
{
   using namespace std;
   if (scores == NULL)
   {
      cout << "ERROR! Null Pointer!" << endl;
      return;
   }

   cout << "Scores: ";

   for(int i = 0; i < TOTAL_SCORES; i++)
   {
      if( scores[i] >= 0 )
         cout << scores[i] << " ";
      else
         break;
   }
   cout << endl;
}

double average(int * scores)
{
   using namespace std;
   double average = 0;

   if (scores == NULL)
   {
      cout << "ERROR! Null Pointer!" << endl;
      return -1;
   }

   for(int i = 0; i < TOTAL_SCORES; i++)
   {
      if(scores[i] >= 0)
         average += scores[i];
      else
         break;
   }

   return average;
}
