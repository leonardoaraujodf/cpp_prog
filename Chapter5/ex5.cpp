#include <iostream>

using namespace std;

struct SalesInfo
{
   string MonthName;
   unsigned int Sales;
};

int main()
{
   SalesInfo * salesInfo = new SalesInfo [12];
   unsigned int sum = 0;
   salesInfo[0].MonthName = "January";
   salesInfo[1].MonthName = "February";
   salesInfo[2].MonthName = "March";
   salesInfo[3].MonthName = "April";
   salesInfo[4].MonthName = "May";
   salesInfo[5].MonthName = "June";
   salesInfo[6].MonthName = "July";
   salesInfo[7].MonthName = "August";
   salesInfo[8].MonthName = "September";
   salesInfo[9].MonthName = "October";
   salesInfo[10].MonthName = "November";
   salesInfo[11].MonthName = "December";
   for(unsigned int i = 0; i < 12; i++)
   {
      cout << "Insert sales info for " << salesInfo[i].MonthName << ": ";
      cin >> salesInfo[i].Sales;
      sum += salesInfo[i].Sales;
   }

   cout << "Total sales for the year: " << sum << endl;

   delete [] salesInfo;
   return 0;
}
