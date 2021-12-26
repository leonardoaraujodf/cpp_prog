#ifndef _LIST_H_
#define _LIST_H_
#include <cstddef>

typedef unsigned int Item;

struct node
{
   node * right;
   node * left;
   Item item;
};

class List {
private:
   enum {MAX = 10};
   int items;
   node * head;
   node * tail;
public:
   List() {items = 0; head = NULL; tail = NULL;}
   bool insert(const Item & item);
   bool remove(const Item & item);
   bool isempty() const{return items == 0;};
   bool isfull() const{return items == MAX;}
   bool ishead(const Item & item) const{return head->item == item;}
   bool istail(const Item & item) const{return tail->item == item;}
   int size(void) {return items;}
};
#endif
