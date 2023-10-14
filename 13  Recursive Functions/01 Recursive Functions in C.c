#include <stdio.h>
    int factorail(int n){
        if(n == 0){
            return 1;
        }else(n * factorail(n-1));
    }
int main(){
int num;
int facto;
printf("\n enter a number");
scanf("%d",&num);
facto = factorail(num);
printf("\n factinal od %d is %d",num,facto);
    return 0;
}