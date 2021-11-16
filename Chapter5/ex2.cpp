// listing 5.4 - formore.cpp -- more looping with for
#include <iostream>
#include <vector>
#include <array>
const int ArSize = 101; // example of external declaration
int main()
{
   using namespace std;
   cout.setf(ios_base::fixed, ios_base::floatfield);
   array<long double, ArSize> factorials;
   factorials[1] = factorials[0] = 1.0;
   for (int i = 2; i < ArSize; i++)
      factorials[i] = i * factorials[i-1];
   for (int i = 0; i < ArSize; i++)
      std::cout << i << "! = " << factorials[i] << std::endl;
   return 0;
}
