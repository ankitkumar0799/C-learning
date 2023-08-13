
#include <stdio.h>
void ref(){
    static int a =1;
    static int b =11;
    printf("%d %d \n",a,b);
    a++;
    b++;

}

int main()
{

  // static storage class
  int i;
  for (i = 0; i < 3; i++)
  {
    ref();
  }
  

  return 0;
}