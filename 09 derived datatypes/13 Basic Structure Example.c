#include <stdio.h>
#include <string.h>

struct employ
{
    int id;
    char name[50];
}e1; //declaring e1 variable for structure


int main(){
    e1.id = 101;
    strcpy(e1.name, "ankit"); //coping string into char array


    printf("\n the id is %d",e1.id);
    printf("\n the name is %s",e1.name);
    
    return 0;
}