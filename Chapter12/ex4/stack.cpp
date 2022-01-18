#include "stack.h"
#include <cstring>

Stack::Stack(int n)
{
   if(n > MAX)
      n = MAX;

   // allocate and zero initialize
   pitems = new Item[n]();
   size = n;
   top = 0;
}

Stack::Stack(const Stack & st)
{
   pitems = new Item[st.size]();
   memcpy(pitems, st.pitems, st.size);
   size = st.size;
   top = st.top;
}

Stack::~Stack()
{
   delete[] pitems;
}

bool Stack::isempty() const
{
   return top == 0;
}

bool Stack::isfull() const
{
   return top == MAX;
}

bool Stack::push(const Item & item)
{
   if (isfull())
      return false;

   pitems[top] = item;
   top++;
   return true;
}

bool Stack::pop(Item & item)
{
   if (isempty())
      return false;

   top--;
   item = pitems[top];
   return true;
}

Stack & Stack::operator=(const Stack & st)
{
   if (this == &st)
      return *this;
   
   delete[] pitems;

   pitems = new Item[st.size]();
   memcpy(pitems, st.pitems, st.size);
   size = st.size;
   top = st.top;
   return *this;
}
