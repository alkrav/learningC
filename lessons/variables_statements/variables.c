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
    if(x) {
        printf("x is true! \n");
    }

}
