//grading system
#include<stdio.h>

int main(){
    
    int maths, english, kiswahili;
    float average;

    
    printf("enter your maths scores: ");
    scanf("%d",&maths);
    
    printf("enter your kiswahili scores: ");
    scanf("%d",&kiswahili);
    
    printf("enter your english scores: ");
    scanf("%d",&english);
    
    //calculating the average score
    average=(maths+ kiswahili+ english) / 3.0;
    
    if(average>=70){
        printf("the grade is A");
    }
    else if(average>=60){
        printf("the grade is B");
    }
    else if(average>=50){
        printf("the grade is C");
    }
    else if(average>=40){
        printf("the grade  is D");
    }
    else {
        printf("the grade is E \n"); // Fail
    }
    
    return 0;
    
}

