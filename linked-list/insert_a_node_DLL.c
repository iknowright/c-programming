#include <stddef.h>

typedef struct node
{
    int data;
    struct node *next, *prev;
} node;

// doubly linked list (DLL)

node *insert_a_nodeDLL(node *head, node *p)
{
    node *t = head;

    if (p == NULL)
        return head;
    if (head == NULL)
        return p;

    if (p->data <= head->data)
    {
        p->next = head;
        head->prev = p;
        return p;
    }
    while (t->next != NULL && t->next->data < p->data)
        t = t->next;
    p->next = t->next;
    t->next = p;
    p->prev = t;
    if (p->next != NULL)
        p->next->prev = p;
    return head;
}

// calling:
// head = insert_a_nodeDLL(head, p);
