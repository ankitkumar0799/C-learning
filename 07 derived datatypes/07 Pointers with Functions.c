#include <stdio.h>
// void fun(int a){
//     printf("\n the value is %d",a);
// }

void display(void(*p)())
{
    for (int i = 1; i <= 5; i++)
    {
        p(i);
    }
    
}
void print_number(int num){
    printf("\n %d",num);
}
int main(){
//     void (*fun_ptr)(int) = &fun;
//     (*fun_ptr)(100);
void (*p)(int) = &print_number;
printf("the is value");
display(p);





    return 0;
}