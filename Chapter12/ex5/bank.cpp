// Listing 12.12
// bank.cpp - Using the queue interface
// compile with queue.cpp

#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <cmath>
#include "queue.h"
const int MIN_PER_HR = 60;
const int SIMULATION_HRS = 150;
const int INIT_COSTUMER_PER_HR = 10;
const double THRESHOLD = 0.01;
const double COSTUMER_MAX_WAIT_TIME = 1;

bool newcostumer(double x); // Is there a new customer?

int main()
{
   using std::cin;
   using std::cout;
   using std::endl;
   using std::ios_base;

   // setting things up
   std::srand(std::time(0)); // random initializing of rand()

   cout << "Bank of Heather Automatic Teller:\n";
   cout << "Enter the maximum size of queue: ";
   int qs;
   cin >> qs;
   Queue line(qs); // line queue holds up to qs people

   int hours;
   // cout << "Enter the number of simulation hours: ";
   // cin >> hours;
   // simulation will run 1 cycle per minute
   hours = SIMULATION_HRS; 
   long cyclelimit = MIN_PER_HR * hours; // # of cycles

   double perhour; // average # of arrival per hour
   double perhourlast; // average # of arrival per hour in last simulation
   double min_per_cust; // average time between arrivals
   double interval;
   // cout << "Enter the average number of customers per hour: ";
   // cin >> perhour;
   perhour = INIT_COSTUMER_PER_HR;
   min_per_cust = MIN_PER_HR / perhour;

   Item temp;          // new customer data
   long turnaways = 0; // turned away by full queue
   long customers = 0; // joined the queue
   long served = 0;    // served during the simulation
   long sum_line = 0;  // cumulative line length
   int wait_time = 0;  // time until autoteller is free
   int line_wait = 0;  // cumulative time in line
   double average_wait_time = 0; // average wait time in minutes per customer
   int simulations = 0; // number of simulations
   while (std::fabs(average_wait_time - COSTUMER_MAX_WAIT_TIME) > THRESHOLD)
   {
      turnaways = 0; // turned away by full queue
      customers = 0; // joined the queue
      served = 0;    // served during the simulation
      sum_line = 0;  // cumulative line length
      wait_time = 0;  // time until autoteller is free
      line_wait = 0;  // cumulative time in line
      // running the simulation
      for(int cycle = 0; cycle < cyclelimit; cycle++)
      {
         if(newcostumer(min_per_cust)) // have newcomer
         {
            if(line.isfull())
               turnaways++;
            else
            {
               customers++;
               temp.set(cycle);    // cycle = time of arrival
               line.enqueue(temp); // add newcomer to line
            }
         }
         if (wait_time <= 0 && !line.isempty())
         {
            line.dequeue(temp); // attend next customer
            wait_time = temp.ptime();
            line_wait += cycle - temp.when();
            served++;
         }
         if (wait_time > 0)
            wait_time--;
         sum_line += line.queuecount();
      }
 
      // empty the last simulation queue info
       while(!line.isempty())
         line.dequeue(temp);

      simulations++;

      // reporting results
      if (customers > 0)
      {
         cout << "--------------------" << endl;
         cout << "       simulations: " << simulations << endl;
         cout << "costumers per hour: " << perhour << endl;
         cout << "customers accepted: " << customers << endl;
         cout << "  customers served: " << served << endl;
         cout << "         turnaways: " << turnaways << endl;
         cout << "average queue size: ";
         cout.precision(6);
         cout.setf(ios_base::fixed, ios_base::floatfield);
         cout << (double)sum_line / cyclelimit << endl;
         average_wait_time = (double)line_wait / served;
         cout << " average wait time: "
              << average_wait_time << " minutes\n";
         cout << "--------------------" << endl;
      }
      else
         cout << "No customers!\n";


      interval = std::fabs(perhour - perhourlast) / 2.0;
      perhourlast = perhour;
      if (average_wait_time > COSTUMER_MAX_WAIT_TIME)
         perhour -= interval;
      else
         perhour += interval;

      min_per_cust = MIN_PER_HR / perhour;
   }

   cout << "Done!\n";

   return 0;
}

// x = average time, in minutes, between customers 
// return value is true if customer shows up this minute
bool newcostumer(double x)
{
   return (std::rand() * x / RAND_MAX < 1);
}
