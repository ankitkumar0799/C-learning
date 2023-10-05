#include <stdio.h>
#include <string.h>
union Data
{
    int i;
    float f;
    char ch[20];
};

int main(){
    union Data d;
    d.i = 56;
    d.f = 6.7;

    strcpy(d.ch, "king");

    printf("Data.i %d \n",d.i);
    printf("Data.f %f \n",d.f);
    printf("Data.ch %s \n",d.ch);

    return 0;
}