#include <stddef.h>

typedef struct node
{
    int data;
    struct node *prev, *next;
} node;

node *create_a_node(int data)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

node *duplicate(node *h)
{
    node *t = NULL, *newh = NULL, *tail;

    while (h != NULL)
    {
        t = create_a_node(h->data);
        if (newh == NULL)
        {
            newh = tail = t;
        }
        else
        {
            tail->next = t;
            tail = tail->next;
        } //tail=tail->next=t;
        h = h->next;
    }
    return newh;
}

// calling:
// h = merge(h1);
