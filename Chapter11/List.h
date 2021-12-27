#ifndef _LIST_H_
#define _LIST_H_

struct node {
   node * next;
   node * prev;
   void * data;
};

class List {
private:
   unsigned int size;
   unsigned int max_size;
   void * nodes;
   node * head;
   node * tail;
   node * _priv_head;
   node * _priv_tail;
   bool _get_next_node(node ** element);
   bool _put_back_node(node * element);
public:
   List(node * nodes, unsigned int max_size);
   bool insert_next(node * node, void * data);
   bool insert_prev(node * node, void * data);
   bool delete_node(node * node, void ** data);
   bool is_full(void) { return size == max_size; };
   bool is_empty(void) { return size == 0; };
   node * return_tail(void){ return tail; };
   node * return_head(void){ return head; };
   ~List();
};

#endif /* _LIST_H_ */
