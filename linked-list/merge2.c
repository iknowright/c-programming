#include <stddef.h>

typedef struct node
{
    int data;
    struct node *next, *prev;
} node;


node * merge2(node *h1, node *h2)
{
    node *t;

    while (h1 !=NULL){
          t = h1;
          h1 = h1->next;
          t->next = NULL;
          h2 = insert_a_node(h2, t);
    }

    return h2;
}
// calling:
// head = merge2(h1, h2);
