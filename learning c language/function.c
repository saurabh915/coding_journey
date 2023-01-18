#include <stdio.h>
int printstar(int a, int b)
{
printf("enter a and b ");
scanf("%d \n %d",&a,&b);
int c=a+b;
return c;
}
//No Argument and No Return Value 
void Star_pattern() 
{ 
	int a; 
	printf("Enter how many stars(*) you want : \n"); /* In this both declaration and definition of function are done together.*/ 
	scanf("%d", &a ); 
	for (int i = 0; i<a; i++) 
	{
		printf("*"); 
	} 
} 
// Without arguments and with return value :


 /*Other Code*/ 
int Sum() 
{ 

	int x,y,z; 
	printf("Enter no. 1 : \t"); 
	scanf("%d",&x); 
	printf("\nEnter no. 2 : \t"); 
	scanf("%d",&y ); 
	z=x+y; 
	return z; 
}  


int main()
{
    int a, b,c;
   
    c= printstar(a,b);
    printf("value of a+b is %d",c);
    Star_pattern();
    int z;
int Sum();/* Declaration of Function */
 printf("value of z is %d",z);
    return 0; 
  
    

}



