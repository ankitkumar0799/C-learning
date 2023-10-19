#include <stdio.h>
#define PI 3.14
int main(){
    printf("\n PI: %.3f",PI);
    printf("\n File : %s",__FILE__);
    printf("\n dATE : %s",__DATE__);
    printf("\n time : %s",__TIME__);
    printf("\n line : %d",__LINE__);
   

    return 0;
}