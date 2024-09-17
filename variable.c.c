//C variables and data type
//preprocessoer derective
#include <stdio.h> //scanf(), printf()

int main() {
    //declaration and initialazation
    char a;
    char name [] = {};
    int age;
    float area;
    double salary;
    printf("Enter a character: ");
    scanf("%c", &a);
    printf("The character is %c \n", a);
    
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("The string is %s \n", name);
    
    printf("Enter the age: ");
    scanf("%d", &age);
    printf("The age is %d \n ", age);
    
    printf("Enter the area: ");
    scanf("%f", &area);
    printf("The area is %.2f \n", area);
    
    printf("Enter the salary: ");
    scanf("%lf",&salary);
    printf("The salary is %.2lf\n", salary);

    return 0;
}