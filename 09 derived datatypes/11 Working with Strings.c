#include <stdio.h>
#include <string.h>

int main(){
    char s1[10] = "hello";
    char s2[10] = "world";
    char s3[20];
    int len;

//copy string to another string
    // strcpy(s3, s1);
    // printf("\n %s",s3);


// give to string word count
    // printf("\n %s",strlen(s3));


//append srting to anpther string
    // strcat(s1,s2);
    // printf("%s",s1);

    int match;
    match = strcmp(s1,s2);
   printf("\n%d",match);




    return 0;
}