#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
    // string campare 
    // char str[] = "Ankit", str2[]= "ankit", str3[]="ankit";
    // int result;
    // result = strcmp(str,str2);
 
    // if (result == 0)
    // {
    //     printf("\n the string is same");
    // }else{
    //     printf("\n not same");
    // }

    //  result = strcmp(str3,str2);
 
    // if (result == 0)
    // {
    //     printf("\n the string is same");
    // }else{
    //     printf("\n not same");
    // }
    


//  STRCHR 
    // const char str[] = "welcome to india";
    // const char ch = 'e';
    // char *ret;

    // ret = strchr(str,ch);
    // printf("\n string after [%c] is %s",ch,ret);


    // char name[] = "ankit";
    // printf("\n the reverse name is %s",strrev(name));


    // // lower class
    // printf("\n the lower name is %s",strlwr(name));


    // // upper name
    // printf("\n the upper name is %s",strupr(name));


// TIME LIBRARY IS STARTTING FROM HERE

// FOR MACHINE TIME ON TERMINAL
// struct tm* ptr;
// time_t t;
// t = time(NULL);
// ptr = localtime(&t);
// printf("\n %s",asctime(ptr));



// FOR HOW MUCH TIME A PROGAM CODE TAKE

    time_t start,end;
    start = time(NULL);
    int a,b;
    scanf("%d %d",&a,&b);
    printf("\n the sum of %d and %d is %d",a,b,a+b);
    end = time(NULL);
    printf("time taken is %.00f seconds",difftime(start,end));

    return 0; 
    
}