#include <stdio.h>
#include <errno.h>
#include <string.h>
int main(){
    FILE *fptr;
    // file desnot exist thst why is give a error
    fptr = fopen("ankit.txt","r");

    printf("\n value returend fron errno: %d",errno);
    printf("\nthe error message is given as : &s",strerror(errno));
    perror("message from perror");
    return 0;
}