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

node *build_a_list(int data[], int n)
{
    node *head = NULL, *p;
    int i;

    for (i = 0; i < n; i++)
    {
        p = create_a_node(data[i]);
        head = insert_a_node(head, p);
    }
    return head;
}

// calling:
int A[10] = {3, 8, 33, 9, 11, 2, 1, 22, 100, 6};
// node *head = build_a_list(A, 10);
