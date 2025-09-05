#include <stdio.h>
#include <math.h>

int main()
{
    double radius = 0.0;
    double area = 0.0;
    double perimeter = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    perimeter = 2 * PI * radius;

    printf("Area of the circle: %lf\n", area);
    printf("Perimeter of the circle: %lf\n", perimeter);

    return 0;
}