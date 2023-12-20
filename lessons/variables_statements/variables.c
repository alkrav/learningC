#include <stdio.h>
#include <stdbool.h> // allows the use of true and false
int main(void){
    int i; // holds signed integers
    i = 2;
    float f; // holds signed floating point numbers
    f = 3.14;
    char *s = "Hello World";
    printf("%s i = %d and f = %f\n", s,i,f);
    /* Boolean types */
    int x = 1;
    x = true;
    if(x) {
        printf("x is true! \n");
    }
    ++i; // pre increment it will add the value then evaluate
    i++; // post increment first it will use the value i then it will increment

    /* Switch Statements */
    int cow_count;
    printf("Enter how many cows");
    scanf("%d", &cow_count); // reads keyboard valuee

    switch(cow_count) {
        case 0:
            printf("There are no cows\n");
            break;
            
        case 1: 
            printf("You have a single cow\n");
            break;
        default:
            printf("This is the default value\n");
            break;
    }


}
