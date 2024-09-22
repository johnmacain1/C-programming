//c variable and data type
//preprocessor directive
#include <stdio.h> //scanf(), printf()
int main(){
    //declaration and initialization
    float principal_amount, rate, simple_interest;
    int time;
    printf("Enter principal_amount: ");
    scanf("%f", &principal_amount);
    printf("The principal amount is %.2f Ksh \n", principal_amount);
    
    printf("Enter the rate: ");
    scanf("%f", &rate);
    printf("The rate is %.2f \n", rate);
    
    printf("Enter time: ");
    scanf("%d", &time);
    printf("The time is %d months \n", time);
    
    //calcutatingsimple interest
    simple_interest = (principal_amount * time *rate)/100;
 
    printf("Simple_interest is %.2f Ksh \n", simple_interest);
    
    return 0;
}