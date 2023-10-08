
#include <stdio.h>
#define value 40000

int main()
{
    

    // value = 690; error
    printf("%d",value);



    const int a = 78;
    sizeof(a);
    // a = 76; error
    printf("%d",a);


  return 0;
}