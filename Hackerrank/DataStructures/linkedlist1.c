#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
    struct node* head =NULL;

void enterlast(int number)
{
    if (head ==NULL)
    {  
        struct node *ptr;
         head= (struct node*) malloc(sizeof(struct node));
        head->data=number;
      
        head->next=NULL;
    }
    else
    {
        struct node* temp,*ptr;
            temp =head;
         while (temp->next !=NULL)
         {
             temp=temp->next;
         }
         ptr =(struct node*)malloc(sizeof(struct node));
         temp->next=ptr;
ptr->data =number;
ptr->next =NULL; 
         
    }
   
}
 void display()
    {
    
        // printf("%d",root->data);
        struct node* temp;
        temp=head;

        while (temp!=NULL)
        {

            printf("%d\n",temp->data);
            temp = temp->next;
        }
        
    }
    
int main ()
{
    int no;
   
    scanf("%d",&no);
    int count =no;
    while (count!= 0)
    {
        int thing;
        scanf("%d",&thing);
        enterlast(thing);
        count--;
    }
    
   
   display();

}