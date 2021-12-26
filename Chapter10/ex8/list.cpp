#include "list.h"

bool List::insert(const Item & item)
{
   node * n;

   if (this->items == MAX)
      return false;

   n = new node;
   if(n == NULL)
      return false;

   n->item = item;
   n->left = NULL;
   n->right = NULL;

   if (!items)
   {
      this->head = this->tail = n;
   }
   else
   {
      this->tail->right = n;
      n->left = this->tail;
      this->tail = n;
   }

   items++;
   return true;
}

bool List::remove(const Item & item)
{
   node * temp;
   node * n;

   if(!this->items)
      return false;

   for(n = this->head; n != NULL; n = n->right)
   {
      if(n->item == item)
         break;
   }

   if (n == NULL)
      return false;

   if(n->right == NULL)
   {
      if(n->left != NULL)
      {
         // removing the tail
         temp = n->left;
         temp->right = NULL;
         this->tail = temp;
      }
   }
   else if(n->left == NULL)
   {
      if(n->right != NULL)
      {
         // removing the head
         temp = n->right;
         temp->left = NULL;
         this->head = temp;
      }
   }
   else
   {
      n->left->right = n->right;
      n->right->left = n->left;
   }
   
   delete n;
   this->items--;
   return true;
}
