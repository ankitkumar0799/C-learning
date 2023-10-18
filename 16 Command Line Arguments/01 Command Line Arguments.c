#include <stdio.h>
int main(int argc, char *argv[]){
    if (argc == 1)
    {
        printf("\n the argument is %s",argv[0]);
    }
    else if(argc > 2){
        printf("\n too many");

    }
    
    
    return 0;
}