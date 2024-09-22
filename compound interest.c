//c variable and datatype
#include <stdio.h> //scanf(), printf()
#include <math.h> // for the pow() fuction

int main() {
    // declaration and initialization
    double compound_interest;
    float p; //principal
    float t; //time
    float r; //rate
    float A; // amount
    float n; //number of times compounding per year
    
    printf("Enter n: ");
    scanf("%f", &n);
    printf("Times compounded per year is %.2f \n", n);
    
    printf("Enter principle: ");
    scanf("%f", &p);
    printf("The principal is %.2f \n", p);
    
    printf("Enter rate: ");
    scanf("%f", &r);
    printf("The rate is %.2f \n", r);
    
    printf("Enter time: ");
    scanf("%f", &t);
    printf("The time is %.2f year \n", t);
    
    //convert rate to faction from percentage
    r = r/100;
    
    //calculate amount
    A =p*pow((1+r/n), n*t);
    
  compound_interest=A-p;
  
    printf("The amount is %.2f \n", A);
    printf("the compound_interest is %.2f \n", compound_interest);

    return 0;
}