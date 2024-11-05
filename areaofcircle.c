#include <stdio.h>
#include <math.h>

void calculate_circle_area() {
    double radius, area;

    // Prompt the user to enter the radius
    printf("Enter radius of the circle: ");
    if (scanf("%lf", &radius) != 1) {
        printf("Please enter a numeric value for the radius.\n");
        return;
    }

    if (radius < 0) {
        printf("Please enter a positive value.\n");
        return;
    }

    // Calculate the area using the formula: A = pr²
    area = M_PI * radius * radius;

    // Display the result
    printf("The radius of a circle%.2f\n is:", radius);
    printf("area of a circle %.2f\n", area);
}

int main() {
    calculate_circle_area();
    return 0;
}