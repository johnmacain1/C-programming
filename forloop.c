// program using for loop
#include <stdio.h>
int main(){
	int start,stop,i;
	
	printf("Enter the starting number: ");
	scanf("%d", &start);
	
	printf("Enter the stopping number: ");
	scanf("%d", &stop);
	
	for(i=start; i<=stop; i++){
		printf("number is: %d and cube of %d is: %d\n", i,i, i*i*i);
	}
	
	return 0;
}