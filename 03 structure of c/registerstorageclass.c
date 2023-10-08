
#include <stdio.h>
#include <conio.h>

int main()
{

  // register storage class
  register int a = 3;

  printf("%u", &a); // this will give a compiler time error since we can not access the address fo

  return 0;
}