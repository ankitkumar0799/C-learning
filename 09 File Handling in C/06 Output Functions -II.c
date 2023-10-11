#include <stdio.h>
#include <stdlib.h>
int main(){
return 0;
  char data1[10];
  char data2[10];
  char data3[10];

  FILE *fileName;
  fileName = fopen("practical.txt","w+");

  fprintf(fileName, "%s %s %s","welcome","to", "homeland");
  rewind(fileName);
  fscanf(fileName,"%s %s %s", data1,data2,data3);

  fseek(fileName,0,SEEK_END);
  int ft = ftell(fileName);
  printf("%d\n",ft);

  fileName = fopen("practical.txt","w+");
  putw(4,fileName);

  rewind(fileName);


  int c = getw(fileName);
  printf("we get the ingeter from the file as &d",c);

  fclose(fileName);

  return 0;


    
}