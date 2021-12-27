#include <iostream>

#include "List.h"

#define MAX_NODES ( 10 )

static node nodes[MAX_NODES];

int main()
{
   using namespace std;
   node * n;
   int * ptr;
   int data1 = 10, data2 = 20, data3 = 30;
   int data4 = 90, data5 = 27, data6 = 17;
   List l(nodes, MAX_NODES);
   l.insert_next(NULL, &data1);
   l.insert_next(NULL, &data2);
   l.insert_next(NULL, &data3);
   l.insert_next(NULL, &data4);
   l.insert_next(NULL, &data5);
   l.insert_next(NULL, &data6);

   while(!l.is_empty())
   {
      n = l.return_tail();
      l.delete_node(n, (void **)&ptr);
   }
   return 0;
}
