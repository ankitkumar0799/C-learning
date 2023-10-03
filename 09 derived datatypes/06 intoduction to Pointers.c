#include <stdio.h>
int main(){

    int var = 20;
    int *ptr = &var;

    printf("\n The adress of var is %x",&var);
    printf("\n The adress stored in ptr is %x",ptr);
    printf("\n The value of stored in ptr %d",*ptr);

    return 0;
}