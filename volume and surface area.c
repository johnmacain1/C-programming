// volume and surface area of a cylinder
#include <stdio.h> //scanf(),printf()
#define PI 22/7

int main() {
    // declaration and initialazation
    int radius;
    int hight;
    float volume;
    float surface_area;
    
    printf("Enter radius: ");
    scanf("%d", &radius);
    printf("The radius is %dcentimeters \n", radius);
    
    printf("Enter hight: ");
    scanf("%d", &hight);
    printf("The hight is %dcentimeters \n", hight);
    
    // calculate volume and surface area
    volume = PI * radius * radius * hight;
    surface_area = 2 * PI * radius * radius + 2 * PI * radius * hight;
    
    printf("volume of the cylinder is %.2fcentimeter cubic \n", volume);
    printf("surface area of the cylinder is %.2fcentimeter square \n", surface_area);
    
    return 0;
}


