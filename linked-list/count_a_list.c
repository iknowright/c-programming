#include <stddef.h>

typedef struct node
{
    int data;
    struct node *prev, *next;
} node;

int count_a_list(node *head)
{
    node *t = head;
    int count = 0;

    while (t != NULL)
    {
        count++;
        t = t->next;
    }
    return count;
}
// calling:
// int n = count_a_list(head);
