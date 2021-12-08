#include <iostream>

template <typename T>
T max5(const T a[]);

int main()
{
   using namespace std;
   int a[] = {1, 5, 4, 5, 6};
   double b[] = {1.5, 2.5, 3.5, 4.7, 5.8};

   cout << "max of a[] = ";
   cout << max5(a) << endl;
   cout << "max of b[] = ";
   cout << max5(b) << endl;
   return 0;
}

template <typename T>
T max5(const T a[])
{
   T max = a[0];
   for(int i = 1; i < 5; i++)
   {
      if(a[i] > max)
         max = a[i];
   }

   return max;
}

