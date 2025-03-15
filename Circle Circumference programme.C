#include <stdio.h>

int main() {
    const double PI = 3.14159;
    double radius;
    double Circumference;
    double area;
    
    printf("\nEnter radius of a circle: ");
    scanf("%lf", &radius);
    
    Circumference= 2 * PI * radius;
    area=PI*radius*radius;
    
    printf("\ncircumference: %lf", Circumference);
    printf("\narea:%lf",area);
    
    

    return 0;
}
