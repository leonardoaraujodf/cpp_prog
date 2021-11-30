#include <iostream>
#include <cstring>
#include <string>
using namespace std;

const int SLEN = 30;
struct student {
   char fullname[SLEN];
   char hobby[SLEN];
   int ooplevel;
};

// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encoutering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
int getinfo(student pa[], int n);

// display1() takes a student structure as an argument
// and displays its contents
void display1(student st);

// display2() takes the address of student structure as an
// argument and displays the structure's contents
void display2(const student * ps);

// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures.
void display3(const student pa[], int n);

int main()
{
   cout << "Enter class size: ";
   int class_size;
   cin >> class_size;
   while (cin.get() != '\n')
      continue;

   student * ptr_stu = new student[class_size];
   int entered = getinfo(ptr_stu, class_size);
   for (int i = 0; i < entered; i++)
   {
      display1(ptr_stu[i]);
      display2(&ptr_stu[i]);
   }
   display3(ptr_stu, entered);
   delete [] ptr_stu;
   cout << "Done\n";
   return 0;
}

int getinfo(student pa[], int n)
{
   int i;
   if((pa == NULL) || (n <= 0))
   {
      cout << "Invalid arguments!" << endl;
      return -1;
   }

   for(i = 0; i < n; i++)
   {
      cout << "Insert student #" << i + 1
           << " name: ";
      cin.getline(pa[i].fullname, SLEN);
      if (!strcmp(pa[i].fullname, "\n"))
         break;
      cout << "Insert student #" << i + 1
           << " hobby: ";
      cin.getline(pa[i].hobby, SLEN);
      cout << "Insert student #" << i + 1
           << " ooplevel: ";
      cin >> pa[i].ooplevel;
      cin.get();
   }

   return i;
}

void display1(student st)
{
   cout << "Fullname: " << st.fullname << endl;
   cout << "Hobby: " << st.hobby << endl;
   cout << "Ooplevel: " << st.ooplevel << endl;
}

void display2(const student * ps)
{
   cout << "Fullname: " << ps->fullname << endl;
   cout << "Hobby: " << ps->hobby << endl;
   cout << "Ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
   for(int i = 0; i < n; i++)
   {
      cout << "Fullname: " << pa[i].fullname << endl;
      cout << "Hobby: " << pa[i].hobby << endl;
      cout << "Ooplevel: " << pa[i].ooplevel << endl;
   }
}
