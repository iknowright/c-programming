#include <stddef.h>

typedef struct node
{
    int data;
    struct node *next, *prev;
} node;

node *merge1(node *h1, node *h2)
{
    node *t, *new_head = NULL, *tail;

    while (h1 != NULL && h2 != NULL)
    {
        if (h1->data < h2->data)
        {
            t = h1;
            h1 = h1->next;
            t->next = NULL;
        }
        else
        {
            t = h2;
            h2 = h2->next;
            t->next = NULL;
        }
        if (new_head == NULL)
            new_head = tail = t;
        else
        {
            tail->next = t;
            tail = t;
        }
    }
    if (h1 != NULL)
        tail->next = h1;
    if (h2 != NULL)
        tail->next = h2;
    return new_head;
}
// calling:
// head = merge1(h1, h2);

// How to improve the speed?
