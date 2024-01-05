#include <stdio.h>
/* function demonstration in c */
int plus_one(int n){
    return n + 1;
}
void hello(void); // function prototype
int main(void){
    int i = 10, j;

    j = plus_one(i);
    printf("i+1 is %d\n",j);

    
}
