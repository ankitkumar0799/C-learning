#include <stdio.h>
// define simple structure
struct
{
    unsigned int a;
    unsigned int b;
}e1;


// define simple structure with bits feilds
struct 
{
    unsigned int a : 10;
    unsigned int b : 10;

}e2;

int main(){
    printf("\n the sixe of e1 is %d",sizeof(e1));
    printf("\n the sixe of e2 is %d",sizeof(e2));
    return 0;
}