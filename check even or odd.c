// fuction to check even or odd
#include <stdio.h>

int checkEvenOdd(int number){

if(number%2==0){
printf("The number is even\n");	
}else{
	printf("The number is odd\n");
}}
int main(){
	int num;
	//user to enter a number
	printf("Enter a number: ");
	scanf("%d", &num);
	
	// calling the fuction
	checkEvenOdd(num);
	return 0;
}