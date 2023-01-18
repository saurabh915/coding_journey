#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data)
{
    struct node *n;
    n =(struct node*)malloc(sizeof( struct node ));
    n->data = data;
    n->left = NULL;
    n->right =NULL; 
    return n;
}
void preordertraverse(struct node *root )
{
    if(root != NULL)
    {
         printf("%d ",root->data);
         preordertraverse(root->left);
         preordertraverse(root->right);

    }
   
}
void postoreder(struct node *root)
{
    
    if (root != NULL)
    {
        postoreder(root->left);
        postoreder(root->right);
        printf("%d ",root->data);
    }
    
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
    
}

int main()
{
    struct node *p  =  createNode(1);
    struct node *p1  = createNode(2);
    struct node *p2  = createNode(3);
    struct node *p3 = createNode(4);
    struct node *p4 = createNode(5);
    struct node *p5 = createNode(6);
        struct node *p6 = createNode(7);




    //              1(p)
    //            /      \
    //           /        \    
    //       2(p1)        5(p4)
    //     /     \         /   \
    //    /       \       /     \
    //    3(p2)   4(p3)  6(p5)   7(p6)
p->left = p1;
p->right =p4;
p1->left = p2;
p1 -> right =p3; 
p4->left =p5;
p4->right = p6;
printf("preorder traverser: ");
preordertraverse(p);
printf("postorder traverser: ");
postoreder(p);
printf("inorder traverser:  ");
inorder(p);
    return 0;
}