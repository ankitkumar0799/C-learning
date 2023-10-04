#include <stdio.h>
int main(){
    int arr[5] = {12,34,32,54,54};
    int *p,*g;
    p = &arr[0];
    g = &arr[3];
    // BEFORE INCREMENT
    // printf("\n the sum of is %d",p);

    // after increment
    // p++;
    // printf("\n the sum of is %d",p);
     


// pointer decrement opratior
    // p--;

    // printf("\n the sum of is %d",p);
    printf("\n the number is %d",p);

    p = p + 2;
    printf("\n the number is %d",p);








    return 0;
}