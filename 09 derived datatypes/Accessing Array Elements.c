#include <stdio.h>
int main(){
	int n[5],i,j;    // array declaration
	
	for(i = 0;i < 5;i++) {
		n[i] = i + 100;    // array intialization
		
}
for(j =0;j < 5;j++) {
	printf("Element[%d] = %d\n",j,n[j]); // array element or use
}

	return 0;
}
