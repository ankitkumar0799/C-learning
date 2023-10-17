#include <stdio.h>
#include <stdarg.h>

float average(int num,...){
    va_list valist;
    float sum;
    

    va_start(valist,num);

    for (int i = 0; i < num; i++)
    {
        sum = sum + va_arg(valist,int);
    }
    

    va_end(valist);

    return sum/num;
}
int main(){
    printf("\n the avarage of 2,3,4,5,6 is %f",average(2,3,4,5,6));
    printf("\n the avarage of 5,10,15,20,15 is %f",average(5,10,15,20,25));



    printf("\n enter your number");
    int a,b,c,d,e,f;
    scanf("%d %d %d %d %d %d" , &a,&b,&c,&d,&e,&f);
    printf("the avarage of %f",average(a,b,c,d,e,f));

    return 0;
}