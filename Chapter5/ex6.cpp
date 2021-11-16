#include <iostream>

using namespace std;

const string _month_names[12] = {
   "January",
   "February",
   "March",
   "April",
   "May",
   "June",
   "July",
   "August",
   "September",
   "October",
   "November",
   "December"
};

struct SalesInfo
{
   unsigned int Sales;
};

int main()
{
   SalesInfo salesInfo[3][12];
   unsigned int sum[3] = {0}, final_sum = 0;
   for(unsigned int i = 0; i < 3; i++)
   {
      for(unsigned int j = 0; j < 12; j++)
      {
         cout << "Insert sales info for Year " << i + 1 << " - Month: " << _month_names[j] << ": ";
         cin >> salesInfo[i][j].Sales;
         sum[i] += salesInfo[i][j].Sales;
      }
   }

   for(unsigned int i = 0; i < 3; i++)
   {
      cout << "Total sales for the Year " << i << ": " << sum[i] << endl;
   }
   final_sum = sum[0] + sum[1] + sum[2];
   cout << "Total sales: " << final_sum << endl;

   return 0;
}
