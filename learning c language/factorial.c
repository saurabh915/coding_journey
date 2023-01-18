#include <stdio.h>
int main()

{
    int factorial, variable;
    printf("enter factorial value\n");
    scanf("enter the number of which you want factorial\n", &factorial);
    variable = factorial - 1;
    printf("value of factorial is %d\n", factorial);
    printf("value of variable is %d\n", variable);
    if (variable > 0)
    {
        factorial = factorial * variable;
        variable--;
        printf("value of factorial is %d\n", factorial);
    
    }
    printf(" factorial of given number is %d", factorial);
    return 0;
}
