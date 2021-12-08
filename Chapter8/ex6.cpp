#include <iostream>
#include <cstring>

template <typename T>
T maxn(const T * arr, int n);

// template <> char * maxn<char>(char ** words, int n);
const char * maxn(const char ** arr, int n);

int main()
{
   using namespace std;
   int a[] = {9, 5, 6, 2, 14, 16};
   double b[] = {5.1, 5.3, 4.9, 9.754};
   const char * words[] = {"First", "Second", "Third", "End"};
   cout << "max a[] = " << maxn(a, 6) << endl;
   cout << "max b[] = " << maxn(b, 4) << endl;
   cout << "max * words[] = " << maxn(words, 4) << endl;
   return 0;
}

template <typename T>
T maxn(const T * arr, int n)
{
   T max = arr[0];
   for(int i = 1; i < n; i++)
   {
      if(arr[i] > max)
         max = arr[i];
   }
   return max;
}

const char * maxn(const char ** arr, int n)
{
   const char * ptr;
   int i, position, longest, actual;
   longest = strlen(arr[0]);
   position = 0;
   for(i = 1; i < n; i++)
   {
      actual = strlen(arr[i]);
      if(actual > longest)
      {
         longest = actual;
         position = i;
      }
   }
   ptr = arr[position];
   return ptr;
}
