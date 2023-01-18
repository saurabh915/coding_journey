#include <stdio.h>
#include<stdlib.h>
struct node                   /*defining structure for creating empty node (imagine it as empty  big box with
                            small address box which stores name of   next big box )   and empty data box  */  
{
    struct node* previous;
    int data;
    struct node *next;//address box
};
struct node *head;//This head will store address of first  emty big box but now it is pointing towards NULL;  

void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
int length();
int main()
{
    while (1)
    {
        int num;
        printf("1.  randominsert()\n");
        printf("2. void beginsert()\n");
        printf("3. void lastinsert()\n");
        printf("4. length\n");
        printf("5. display\n");
        printf("6. random delete\n");
        printf("7. begining delete\n");
           printf("8. last delete\n");
              printf("9. search\n");
                 printf("10. exit\n");
        printf("enter the choice");
        scanf("%d", &num);
        switch (num)
        {

        case 1:
            randominsert();//complete
            break;
        case 2:
            beginsert();//complete
            break;
        case 3:
             lastinsert();//complete
            break;

        case 4:
            length();//complete
            break;
        case 5:
            display();//complete
            break;
        case 6:
            random_delete();//complete
            break;
        case 7:
            begin_delete();//complete
            break;
        case 8:
            last_delete();//complete
            break;
        case 9:
            search();//complete
            break;
        case 10:
            exit(1);//complete
            break;
        }
    }
    return 0;
}
void randominsert()
{
//in random insert node is inserted after the given loc.
    struct node *temp, *s,*n;//s pointeris used to itterate in list till  and n is used for swapping and temp is used to create node
    int item, loc;
    int i = 1;
    temp = (struct node *)malloc(sizeof(struct node *));
    printf("enter the data\n");
    scanf("%d", &item);
    temp->data = item;
    printf("enter the location\n ");
    scanf("%d", &loc);
        temp->previous = NULL;
    temp->next = NULL;

   if (head == NULL)
   {
       head = temp;
   }
else
{
     s = head;
    while (i < loc)
    {
        s = s->next;
        i++;
    }
    temp->next =s->next;
    s->next->previous =temp;

    temp->previous = s;
    s->next =temp;
}

   
   
}

void beginsert()
{
    struct node *temp;//temp is empty big box   with NULL as name
    int item;

    temp = (struct node *)malloc(sizeof(struct node *));//pointing to big box which do not have name by storing address of that newly created box
    printf("enter the data");
    scanf("%d", &temp->data );
    // as namke of big box  is temp by using  that name
    temp->previous =NULL;
    temp->next = NULL;  
    if (head == NULL)
    {
        head = temp;
        /* code */
    }
    else
    {
    
        struct node *p;//here p is just used as third variable for swapping p is able to store address of structure. 
        p = head;
        temp->next = p;
        head->previous = temp;
        head =temp;
        

    }
}

void lastinsert()
{

    int item;
    struct node *ptr, *temp;//here ptr is used for finding NULL in last NODE and temp is used to store data 
    temp = (struct node *)malloc(sizeof(struct node *));
    scanf("%d", &item);
    temp->data = item;
    temp->previous =NULL;
    temp->next =NULL;
 if (head == NULL )
 {
     head = temp;

 }
 else
 {
      ptr = head;

   
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
       
    }
    ptr->next= temp;
   
    temp->next = NULL;
    temp->previous = ptr;
    
 }
 
 
   
}

int length()
{
    int count = 1;
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    return count;
}
void begin_delete()
{
   struct node* temp;
   /*  temp=head;
    temp = temp ->next;*/
    temp = head->next;
    head->next =NULL;
    head=temp;
    head->previous=NULL;
}
void last_delete()
{
    int count = 1;
    struct node *temp;
    temp = head;
    while (count < length())
    {
        temp = temp->next;
        count++;
    }
    temp->next = NULL;
}
void random_delete()
{

    struct node *temp, *s;
    int item, loc;
    int i = 1;
    // temp = (struct node *)malloc(sizeof(struct node *));

    printf("enter the location\n ");
    scanf("%d", &loc);
  
    s = head;
    while (i < loc-1)
    {
        s = s->next;
        i++;
    }
    temp = s->next;
     s->next =temp->next;

}
void display()
{
    
    struct node *temp;
    temp = head;
    while (temp->next!=NULL)
    {
        
       
        printf(" %d\n", temp->data);
         temp = temp->next;
    }
    printf("by reversing\n");
    while (temp->previous !=NULL)
    {
         printf(" %d\n", temp->data);
         temp = temp->previous;
        
    }
    


}
void search()
{
    int item;
    struct node *temp;
    temp = head;
    int count = 0;
    printf("enter the data you want to search:");
    scanf("%d", &item);
    while (temp->data != item)
    {
        temp = temp->next;
        count++;
    }
    printf("your data is at position %d", count);
}