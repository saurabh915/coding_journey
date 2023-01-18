#include <stdio.h>

int main() {
    int i;
    printf("add a number\n");
    scanf("%d", &i);


    switch(i) {
        case 5:
        printf("the value is five");
        break;

        case 6:
        printf("the value is six\n");
    break;
    
    case 7:
    printf("the value is seven\n");
     break;

    defult:
    printf("value is not appropriate\n");
    

        
        
    }
    return 0;
}