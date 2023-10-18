#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

    // in this the memory is going to be waste
    char ch[50];

    // in this variable memory is going to be save by malloc funtion
    char *desc;
    strcpy(ch,"learnvern");

    // memory management funtion is here
    desc = malloc(200 * sizeof(char));
    if (desc == NULL)
    {
        fprintf(stderr,"unable to allocate memory");
    }else{
        strcpy(desc,"this is ankit here");
    }
    printf("Topic = %s\n",ch);
    printf("desctibtion = %s",desc);

    
    return 0;
}