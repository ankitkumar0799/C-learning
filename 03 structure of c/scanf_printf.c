
#include <stdio.h>


int main()
{
    int a,b,result,multipal,subtract;
    printf("enter a numbers");
    scanf("%d%d",&a,&b);

    result = a+b;
    multipal = a*b;
    subtract = a-b;
    

    printf("The Sum of The number is:%d \n The multipal of The number is:%d \n The Subtraction of The number is:%d",result,multipal,subtract);

  return 0;
}