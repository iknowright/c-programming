#include <stddef.h>

typedef struct node
{
    int data;
    struct node *left, *right;
} node;

node *BTS_insert_a_node(node *root, int d)
{
    node *t;

    if (root == NULL)
    {
        return create_a_BST_node(d);
    }
    t = root;
    while ((t->data < d && t->right != NULL) || (t->data >= d && t->left != NULL))
    {
        if (t->data < d)
            t = t->right;
        else
            t = t->left;
    }
    if (t->data < d)
        t->right = create_a_BST_node(d);
    else
        t->left = create_a_BST_node(d);
    return root;
}

// calling:
// root = BST_insert_a_node(root, d);
