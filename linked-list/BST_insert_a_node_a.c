#include <stddef.h>

typedef struct node
{
      int data;
      struct node *left, *right;
} node;

BTS_insert_a_node_a(node **root, int d)
{
      node *t;

      while (*root != NULL)
      {
            if ((*root)->data < d)
                  root = &((*root)->right);
            else
                  root = &((*root)->left);
      }
      *root = create_a_BST_node(d);
      return;
}
// calling:
// BST_insert_a_node_a(&root, d);
