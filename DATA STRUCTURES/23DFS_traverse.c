  
     #include<stdio.h>
    // Enqueue few elements
    // enqueue(&q, 12);
    // enqueue(&q, 15);
    // enqueue(&q, 1); 
    // printf("Dequeuing element %d\n", dequeue(&q));
    // printf("Dequeuing element %d\n", dequeue(&q));
    // printf("Dequeuing element %d\n", dequeue(&q)); 
    // enqueue(&q, 45);
    // enqueue(&q, 45);
    // enqueue(&q, 45);
 
    // if(isEmpty(&q)){
    //     printf("Queue is empty\n");
    // }
    // if(isFull(&q)){
    //     printf("Queue is full\n");
    // }
 
 
 
 int visited[7]={0,0,0,0,0,0,0};
 int a[7][7] = {
     {0,1,1,1,0,0,0},
     {1,0,1,0,0,0,0},
     {1,1,0,1,1,0,0},
     {1,0,1,0,1,0,0},
     {0,0,1,1,0,1,1},
     {0,0,0,0,1,0,0},
     {0,0,0,0,1,0,0}

 };
 void DFS(int i)
 {
    
     printf("%d",i);
        visited[i] =1;
     for (int j = 0; j < 7; j++)
     {
         if (a[i][j]==1 && !visited[j])
         {
             DFS(j);
         }
         
     }
     
 }

 int main ()
 {
DFS(0);
 }
