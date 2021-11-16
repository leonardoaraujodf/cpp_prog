#include <iostream>

const double Daphane_init_invest = 100;
const double Daphane_interest = 0.10;
const double Cleo_init_invest = 100;
const double Cleo_interest = 0.05;

int main()
{
   using namespace std;
   cout.setf(ios_base::fixed, ios_base::floatfield);
   double Daphane_invest = 0;
   double Cleo_invest = 0;
   unsigned int years = 1;
   Daphane_invest = Daphane_init_invest;
   Cleo_invest = Cleo_init_invest;
   while ( Cleo_invest <= Daphane_invest )
   {
      Daphane_invest += Daphane_init_invest * Daphane_interest;
      Cleo_invest += Cleo_invest * Cleo_interest;
      cout << "Year: " << years << " Daphane Investment: " << Daphane_invest << " Cleo Investment: " << Cleo_invest << endl;
      years++;
   }
   return 0;
}
