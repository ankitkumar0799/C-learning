#include <stdio.h>
#include <string.h>
struct address
{
    int hno;
    char city[20];
    int pin;
};
struct employee
{
    char name[20];
    struct address add; // USING ANOTHER STUCTURE IN ANOTHER STRUCTER
};

void main(){
    struct employee emp[2];
    for (int i=0; i<2 ;i++)
    {
        /* code */
    
    
    printf("\n Enter employee info:%d",i);
    scanf("%s %d %s %d",&emp[i].name,&emp[i].add.hno, &emp[i].add.city, &emp[i].add.pin);   
  };

for (int i = 0; i < 2; i++)
{
    


    printf("\n printing the employee details %d",i);
    printf("\n name:%s\n house no:%d \n city: %s \n pin:%d ",emp[i].name,emp[i].add.hno,emp[i].add.city,emp[i].add.pin);
}   
}