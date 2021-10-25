#include <stddef.h>

typedef struct node
{
    int data;
    struct node *left, *right;
} node;

node *BTS_delete_a_node(node *root, int d)
{
    node *t, *tp = NULL;
    if (root == NULL)
        return root;
    if (root->data == d && root->left == NULL && root->right == NULL)
    {
        free(root);
        return root;
    }
    t = root;
    while ((t->data < d && t->right != NULL) || (t->data > d && t->left != NULL))
    {
        tp = t;
        if (t->data < d)
            t = t->right;
        else
            t = t->left;
    }
    if (t->data != d)
        return root;
    while (t->left != NULL || t->right != NULL)
    {
        // [[search_replacing_node(t, &t1, &tp1);]]
        // t->data = t1->data;
        // t = t1; tp = tp1;
    }
    if (t = tp->left)
        tp->left = NULL;
    else
        tp->right = NULL;
    free(t);
}

// calling:
// root = BST_insert_a_node(root, d);

// if (t->left != NULL){
//     tp1 = t; t1 = t->left;
//     while(t1->right != NULL){
//          tp1 = t1; t1=t1->right;
//     }
// } else {
//     tp1 = t; t1 = t->right;
//     while(t1->left != NULL){
//          tp1 = t1; t1=t1->left;
//     }
// }
