#include <stdio.h>

int main() {
    float radius, diameter, circumference;
    const float PI = 3.14159;

    printf("Enter radius: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * PI * radius;

    printf("Diameter = %.2f\n", diameter);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
