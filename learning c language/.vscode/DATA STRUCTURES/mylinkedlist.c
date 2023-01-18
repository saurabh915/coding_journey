#include<stdio.h>
struct node
{
   int data;
   struct node* next;
};
struct node* head;
void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
int main()
{



    return 0;
}
void beginsert()
{
    int item;

    head = (struct node*)malloc(sizeof(struct node* ));
    scanf("%d",&item);
    
    head->data=item;
    head-> next = NULL;

}

void lastinsert()
{
    
    int item;
    int* save;
    struct node* ptr;
    ptr = (struct node*)malloc(sizeof(struct node* ));
    scanf("%d",&item);
    ptr->next = head;
    
    

} 