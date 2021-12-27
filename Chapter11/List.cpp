#include <cstdlib>
#include <cstring>

#include "List.h"

bool List::_get_next_node(node ** element)
{
   if(element == NULL)
      return false;

   if(is_full())
      return false;

   *element = _priv_tail;
   _priv_tail = _priv_tail->prev;
   _priv_tail->next = NULL;

   return true;
}

bool List::_put_back_node(node * element)
{
   if(element == NULL)
      return false;

   if(is_empty())
      return false;

   element->prev = _priv_tail;
   _priv_tail->next = element;
   _priv_tail = element;
   _priv_tail->next = NULL;
   _priv_tail->data = NULL;

   return true;
}

List::List(node * nodes, unsigned int max_size)
{
   if(nodes == NULL)
      return;

   this->size = 0;
   this->max_size = max_size;
   this->nodes = nodes;
   this->head = NULL;
   this->tail = NULL;
   this->_priv_head = &nodes[0];
   this->_priv_tail = &nodes[max_size - 1];

   for (node * n = this->_priv_head; n != this->_priv_tail; n++) {
      n->next = (n + 1);
      (n + 1)->prev = n;
   }
}

bool List::insert_next(node * element, void * data)
{
   node * new_element;

   if (is_full())
      return false;

   if(!_get_next_node(&new_element))
      return false;
   new_element->data = data;

   if (element == NULL) {
      if(is_empty())
         head = tail = new_element;
      else {
        tail->next = new_element; 
        new_element->prev = tail;
        tail = new_element;
      }
   }
   else {
      new_element->prev = element;
      new_element->next = element->next;
      element->next = new_element;
      new_element->next->prev = new_element;
   }

   size++;
   return true;
}

bool List::insert_prev(node * element, void * data)
{
   node * new_element;

   if (is_full())
      return false;

   if(!_get_next_node(&new_element))
      return false;
   new_element->data = data;

   if (element == NULL) {
      if(is_empty())
         head = tail = new_element;
      else {
        head->prev = new_element; 
        new_element->next = head;
        head = new_element;
        head->prev = NULL;
      }
   }
   else {
      new_element->next = element;
      new_element->prev = element->prev;
      element->prev = new_element;
      new_element->prev->next = new_element;
   }

   size++;
   return true;
}

bool List::delete_node(node * node, void ** data)
{
   if (node == NULL)
      return false;

   if (data == NULL)
      return false;

   *data = node->data;

   if(head == node) {
      head = head->next;
      head->prev = NULL;
      if(!_put_back_node(node))
         return false;
   }
   else if (tail == node) {
      tail = tail->prev;
      tail->next = NULL;
      if(!_put_back_node(node))
         return false;
   }
   else {
      node->prev->next = node->next;
      node->next->prev = node->prev;
      if(!_put_back_node(node))
         return false;
   }
   size--;

   return true;
}

List::~List()
{
   void * data;
   while(is_empty())
   {
      if(!delete_node(tail, &data))
         return;
   }

   memset(nodes, 0, max_size);
}
