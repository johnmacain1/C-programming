// program using while loop
#include <stdio.h>
int main(){
	int start,stop,i;
	
	printf("Enter the starting number: ");
	scanf("%d", &start);
	
	printf("Enter the stopping number: ");
	scanf("%d", &stop);
	
	i=start;
	while(i<=stop){
		printf("number is: %d and cube of %d is: %d\n", i,i, i*i*i);
		i++;
	}
		
	return 0;
}