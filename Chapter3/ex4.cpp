#include <iostream>

int main()
{
   using namespace std;
   long long seconds;
   long long days, hours, minutes;
   const unsigned int HOURS_IN_A_DAY = 24;
   const unsigned int MINUTES_IN_A_HOUR = 60;
   const unsigned int SECONDS_IN_A_HOUR = 60;
   
   cout << "Enter the number of seconds: ";
   cin >> seconds;
   cout << seconds << " seconds = ";

   days = seconds/(HOURS_IN_A_DAY * MINUTES_IN_A_HOUR * SECONDS_IN_A_HOUR);
   seconds = seconds%(HOURS_IN_A_DAY * MINUTES_IN_A_HOUR * SECONDS_IN_A_HOUR);
   hours = seconds/(MINUTES_IN_A_HOUR * SECONDS_IN_A_HOUR);
   seconds = seconds%(MINUTES_IN_A_HOUR * SECONDS_IN_A_HOUR);
   minutes = seconds/SECONDS_IN_A_HOUR;
   seconds = seconds%SECONDS_IN_A_HOUR;

   cout << days << " days, " << hours << " hours, " << minutes << " minutes, ";
   cout << seconds << " seconds" << endl;
   
   return 0;
}
