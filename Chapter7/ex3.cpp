#include <iostream>
using namespace std;

struct box
{
   char maker[40];
   float height;
   float width;
   float length;
   float volume;
};

void show_box(box box);
int calculate_volume(box * box);
int fill_box(box * box);

int main()
{
   box my_box;
   fill_box(&my_box);
   calculate_volume(&my_box);
   show_box(my_box);
   return 0;
}

void show_box(box box)
{
   cout << "Maker: " << box.maker << endl;
   cout << "Height: " << box.height << endl;
   cout << "Width: " << box.width << endl;
   cout << "Length: " << box.length << endl;
   cout << "Volume: " << box.volume << endl;
}

int calculate_volume(box * box)
{
   if (box == NULL)
   {
      cout << "Error! Null ptr" << endl;
      return -1;
   }
   box->volume = box->height * box->width * box->length;
   return 0;
}

int fill_box(box * box)
{
   if (box == NULL)
   {
      cout << "Error! Null ptr" << endl;
      return -1;
   }
   cout << "Enter the box maker: ";
   cin >> box->maker;
   cout << "Enter the box height: ";
   cin >> box->height;
   cout << "Enter the box width: ";
   cin >> box->width;
   cout << "Enter the box length: ";
   cin >> box->length;
   return 0;
}
