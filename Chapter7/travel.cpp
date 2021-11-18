// listing 7.11 - travel.cpp -- using structures with functions
#include <iostream>

struct travel_time
{
   int hours;
   int mins;
};

const int Mins_per_hour = 60;

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main()
{
   using namespace std;
   travel_time day1 = {5, 45}; // 5h 45min
   travel_time day2 = {4, 55}; // 4h 55min

   travel_time trip = sum(day1, day2);
   cout << "Two-day total: ";
   show_time(trip);

   travel_time day3 = {4, 32}; 
   cout << "Three-day total: ";
   show_time(sum(trip, day3));

   return 0;
}

travel_time sum(travel_time t1, travel_time t2)
{
   travel_time total;

   total.mins = (t1.mins + t2.mins) % Mins_per_hour;
   total.hours = t1.hours + t2.hours + (t1.mins + t2.mins)/Mins_per_hour;
   return total;
}

void show_time(travel_time t)
{
   using namespace std;
   cout << t.hours << " hours, "
        << t.mins << " minutes" << endl;
}
