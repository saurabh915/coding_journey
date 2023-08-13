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
    n =(struct node*)malloc(sizeof( struct node ));//just creating a doubly node pointing to NULL and they are connected with each other mannualy
    n->data = data;
    n->left = NULL;
    n->right =NULL; 
    return n;
}
void preordertraverse(struct node *root )
{
    if(root != NULL)
    {
         printf("%d ",root->data);//first print root the left subtree the right subtree
         preordertraverse(root->left);
         preordertraverse(root->right);

    }
   
}
void postoreder(struct node *root)
{
    
    if (root != NULL)
    {
        postoreder(root->left);
        postoreder(root->right);//first left subtree then right subtree and then root;
        printf("%d ",root->data);
    }
    
}
void inorder(struct node *root)
{
    
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);//first leftsubtree then root then right subtree; 
    }
}
int isBST(struct node* root)
{
    static struct node *prev =NULL;
    if (root!=NULL)
    {
        
        if(!isBST( root ->left)){
          printf("it is not binary s tree");
            return 0;//if given tree is binary search tree then this loop is not executed as function will return 1;
        }
        if( prev != NULL && root ->data <= prev->data)
        {
            printf("this is not a binary search tree");
            return 0;  //this will execute if it is not binary search tree.
        }
        prev = root;
        return isBST(root ->right);//this will always give 1 if given tree is binary search tree
    }
    else
    {
        return 1;//this will used most
    }
      
}
//same as binary search no difference only difference is we have to return address of structure hence the function is pointer type
struct node * searchIter(struct node* root, int key){
    while(root!=NULL){
        if(key == root->data){
            return root;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}

struct node* search(struct node* root , int key)
{
    while (root !=NULL)
    {
        if (root->data==key)
        {
            return root;
        }
        else
        {
            if (root->data >key)
            {
                root = root->left;
            }
            else
            {
                root=root->right;
                return search(root->left,key) ;
            }
    
            
            
        }
        
        
    }
    printf("root is not found\n");
};
void insert(struct node* root, int key)
{
            struct node* prev= NULL;
  
    
        while (root != NULL)
        {
            prev =root;
            if (root->data == key)
            {   printf("can not insert ");
                return;
            }
            else
            {
                if (root->data < key )
                {
                    root = root->right;
                }
                else
                {
                    root = root->left;
                }
                
            }
            
        }
        struct node* new;
        new =createNode(key);
        if (key<prev->data)
        {
           prev->left= new;
        }
        else
        {
            prev->right=new;
          

        }
        
        
    }
    struct node* inorderpredecessor(struct node* root){
        printf("inorderpredesoor is called with root %d\n",root->data);
        root = root->left;
        printf("root to left is stored in root now root is %d\n",root->data);
        while (root->right!=NULL)
        {printf("i am inside root ->right while loop and looping till i dont find root->right !=NULL\n");
           root=root->right;//here is the trick which says that if we do inorder traverser and we got all elements sorted and we have to find 
                             // the node which is just behind the any node(let say A) then that precceding node is right most node of  left subtree of   node (A).  
        }
        printf("root is returned %d\n",root->data);
        return root;
    }
    
struct node *deletenode(struct node* root, int value)
{
    struct node* ipre; 
    if(root == NULL )
    {
        return NULL;
    }
    if (root->left==NULL && root->right==NULL)
    {
        printf("i  am at %d \n",root->data);
        printf("and root->left and right is null");
        printf("hence i am freed");
        free(root);
        return NULL;
    }
    
    //search the node to be deleted
    if (value<root->data)
    {
        printf("root is %d and value is %d",root->data,value);
        printf("and as my value is less than root data i am calling delete node root to left data and storing it into root left\n");
         root->left = deletenode(root->left,value);
         printf("i am returned from calling delete node root to left\n");
         printf("and value of root to left is %d\n",root->left->data);
    }
    else if(value>root->data)
        {
              printf("root is %d and value is %d",root->data,value);
        printf("and as my value is greater than root data i am calling root to right data and storing it into root right\n");
            root->right = deletenode(root->right,value);  
             printf("i am returned from calling delete node root to right\n");
         printf("and value of root to left is %d\n",root->right->data);  
      }
      //deletion strategy the node is found
    else
    {printf("i am(root)  equal to value hence calling inorderpredecessor and storing in ipre\n ");
        ipre = inorderpredecessor(root);
        printf("i returned from calling inorderpredecessor and value of predcessor is %d\n",ipre->data);
        root->data = ipre->data;//here the core operation of deletion is takes place.
        printf("ipre to data is stored in root to data\n");
       root->left = deletenode(root->left,ipre->data);
    }
    
    printf("returning root %d",root->data);
    return root;
}

int main()
{
    int key;
    struct node *p  =  createNode(4);
    struct node *p1  = createNode(2);
    struct node *p2  = createNode(1);
    struct node *p3 = createNode(3);
    struct node *p4 = createNode(6);
    struct node *p5 = createNode(5);
        struct node *p6 = createNode(7);
        




    //              4(p)
    //            /      \
    //           /        \    
    //       2(p1)        6(p4)
    //     /     \         /   \
    //    /       \       /     \
    //    1(p2)   3(p3)  5(p5)   7(p6)
p->left = p1;
p->right =p4;
p1->left = p2;
p1 -> right =p3; //assigning position to nodes of tree
p4->left =p5;
p4->right = p6;
// inorder(p);
// deletenode(p,6);
// printf("\n");
// inorder(p);
// printf("preorder traverser: ");
// preordertraverse(p);
// printf("postorder traverser: ");
// printf("inorder traverser:  ");
// inorder(p);
// // postoreder(p);
// printf("is bst: %d\n",isBST(p));


struct node* value =search(p , 2);
printf("%d\n",value->data);
// struct node* n = searchitr(p,3);
// printf("found: %d",n->data);

// insert(p  , 9);
// printf("\n%d",p->right->right->right->data );



// struct node* n = searchitr(p, 10);
//     if(n!=NULL){
//     printf("Found: %d", n->data);
//     }
//     else{
//         printf("Element not found");
//     }





// if(isBST(p)){
//         printf("This is a bst" );
//     }
//     else{
//         printf("This is not a bst");
//     return 0;
}