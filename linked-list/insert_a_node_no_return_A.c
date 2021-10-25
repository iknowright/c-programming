#include <stddef.h>

typedef struct node
{
      int data;
      struct node *next, *prev;
} node;

insert_a_nodeA(node **h, node *p)
{
      node **t = h;

      if (p == NULL)
            return;

      while ((*t) != NULL && (*t)->data < p->data)
            t = &((*t)->next);
      p->next = (*t);
      (*t) = p;
      return;
}

// calling:
// insert_a_nodeA(&head, p);
