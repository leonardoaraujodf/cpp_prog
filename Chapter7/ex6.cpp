#include <iostream>
#include <cstring>

unsigned int Fill_array(double arr[], unsigned int size);
void Show_array(double arr[], unsigned int size);
void Reverse_array(double arr[], unsigned int size);

int main()
{
   using namespace std;
   unsigned int elements;
   double * arr;
   double * copy;
   cout << "Please insert the number of array elements: ";
   cin >> elements;
   if(elements == 0)
      cout << "Done!" << endl;

   arr = new double[elements];
   if(arr == NULL)
      cout << "Cannot allocate memory!" << endl;

   cout << "Please insert " << elements << " array elements: ";
   elements = Fill_array(arr, elements);
   cout << "Your inserted " << elements << " succesfully." << endl;
   copy = new double[elements];
   if(arr == NULL)
      cout << "Cannot allocate memory!" << endl;

   memcpy(copy, arr, sizeof(double) * elements);

   cout << "Your elements are ";
   Show_array(arr, elements);
   Reverse_array(arr, elements);

   cout << "Your array elements reversed are ";
   Show_array(arr, elements);

   memcpy(arr, copy, sizeof(double) * elements);
   cout << "Getting back your elements ";
   Show_array(arr, elements);

   cout << "Reverse all but the first and last elements ";
   Reverse_array(arr + 1, elements - 2);
   Show_array(arr, elements);
   delete [] arr;
   delete [] copy;
}

unsigned int Fill_array(double arr[], unsigned int size)
{
   using namespace std;
   unsigned int i;
   for (i = 0; i < size && (cin >> arr[i]); i++);
   return i;
}

void Show_array(double arr[], unsigned int size)
{
   using namespace std;
   cout << "arr: ";
   for(unsigned int i = 0; i < size; i++)
      cout << arr[i] << " ";
   cout << endl;
}

void Reverse_array(double arr[], unsigned int size)
{
   double temp;
   for(unsigned int i = 0; i < size / 2; i++)
   {
      temp = arr[i];
      arr[i] = arr[size - i - 1];
      arr[size - i - 1] = temp;
   }
}
