#include <stdio.h>
#include <stdlib.h>
void preorder(struct node* );
struct node
{
    int key;

    struct node *left;
    struct node *right;
    int height;
};

int getheight(struct node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return n->height;
}
struct node *createnode(int key)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    printf(" node is created %d\n",node->key);
    return node;// it is pointing to the new address
}
int max(int a,int b)
{
    return (a>b)?a:b;
}
int getbalalancefactor(struct node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return getheight(n->left) - getheight(n->right);
}
struct node *rightrotate(struct node *y)
{
    struct node *x = y->left;
    struct node *t2 = x->right;
    x->right = y;
    y->left = t2;

    y->height = max(getheight(y->right), getheight(y->left)) + 1;
    x->height = max(getheight(x->right), getheight(x->left)) + 1;

    return x;
}

struct node *leftrotate(struct node *x)
{

   printf("preorder node before leftrotation  \n");
   preordertraverse(x) ;
    struct node *y = x->right;
    struct node *t2 = y->left;
    y->left = x;
    x->right = t2;

    x->height = max(getheight(x->right), getheight(x->left)) + 1;//updating height of nodes which positions are changed.
    y->height = max(getheight(y->right), getheight(y->left)) + 1;
 printf("preorder node after leftrotation  \n");
   preordertraverse(y) ;
    return y;
}

struct node *insert(struct node *node, int key)//here node is NULL and key is some value for first run;
{

    if (node == NULL)
    {
        printf("value of node is NULL so creating node\n");
        return  createnode(key);

    }
 printf("value of key and node->key is %d  %d\n",key,node->key);
    if (key < node->key)
    {
         printf("value of key and node->key is %d  %d\n",key,node->key);

        printf("i am inside key < node->key\n");
        printf("node to left is called as node\n");
        node->left  = insert(node->left, key);

    }
    else if (key > node->key)
    {
        printf("i am inside key > node->key\n");
                printf("node to right is called as node\n");

        node->right = insert(node->right, key);

    }
        
   
    node->height = 1 + max(getheight(node->left), getheight(node->right));
    printf("node height is %d\n",node->height);
    int bf = getbalalancefactor(node);//first time bf is -1; then -2
    printf("bf is %d\n",bf);

        
        
        // left left case
        if (bf > 1 && key < node->left->key)
        {
                printf("value of bf and key and node->right->key %d  %d %d in  left left case\n",bf,key,node->right->key);
            printf("as bf is greater than 1 and key<  node ->left->key i am right rotating \n");
            return rightrotate(node);
        }
        // right right case
        if (bf < -1 && key > node->right->key)

        {
                printf("value of bf and key and node->right->key %d  %d %d in  right right case\n",bf,key,node->right->key);
                       printf("as bf is less than -1 and key>  node ->left->key i am left rotating\n ");

            return leftrotate(node);//this is that node which doesn't have good balance factor ie <-1/1; and this function will return the node is changed root node.
        }
        // left right case
        if (bf > 1 && key > node->left->key)
        {                          printf("value of bf and key and node->right->key %d  %d %d in  left right case\n",bf,key,node->right->key);

                                   printf("as bf is greater than 1 and key>  node ->left->key i am left  rotating in left right case\n ");

            node->left =leftrotate(node->left);//here we are rotating nodes left node so be careful
            printf("as bf is greater than 1 and key>  node ->left->key i am  right rotating in left right case\n");

            return rightrotate(node);
        }
        // right left case
        if (bf < -1 && key < node->right->key)
        {                           printf("value of bf and key and node->right->key %d  %d %d in rigt left  case\n",bf,key,node->right->key);
                                   printf("as bf is less than -1 and key< node ->left->key i am right rotating in right left case\n ");

            node->right = rightrotate(node->right);
                                              printf("as bf is less than -1 and key< node ->left->key i am left rotating in right left case\n ");

            return leftrotate(node);
        }

        printf("returning node is %d\n",node->key) ;
    return node;
}
void preordertraverse(struct node *root )
{
    if(root != NULL)
    {
         printf("%d ",root->key);//first print root the left subtree the right subtree
         preordertraverse(root->left);
         preordertraverse(root->right);

    }
   
}
int main()
{


    struct node *root =NULL;
    printf("shooting 1 for insertion\n");
    root = insert(root,1);//root is null initially
    printf("shooting 2 for insertion\n");

        root = insert(root,2);// previous changed root is taken
            printf("shooting 4 for insertion\n");

    root = insert(root,4);//same node is returned for this step from previous step;
        printf("shooting 5 for insertion\n");

        root = insert(root,5);
            printf("shooting 6 for insertion\n");

          root = insert(root,6);
    printf("shooting 3 for insertion\n");

    root = insert(root,3);
    preordertraverse(root);




    return 0;
}