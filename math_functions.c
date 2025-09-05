#include <stdio.h>
#include <math.h>

int main()
{
    int x = 5;
    float y = -10.5f;

    // Finding square root
    printf("Square root of %d is: %f\n", x, sqrt(x));
    printf("Square root of %f is: %f\n", y, sqrt(y));

    //Finding squares
    printf("Square of %d is %f\n", x, pow(x, 2));
    printf("Square of %f is %f\n", y, pow(y, 2));

    //Finding cubes
    printf("Cube of %d is %f\n", x, pow(x, 3));
    printf("Cube of %f is %f\n", y, pow(y, 3));

    // Rounding off a floating point number
    printf("Rounding off %f gives: %lf\n", y, round(y));

    //Abs value
    printf("Absolute value of %d is %+d\n", x, abs(x));
    printf("Absolute value of %f is %+f\n", y, fabs(y));

    //Ceil and Floor
    printf("Ceil values of %+f is %+lf. But it's floor is %+lf\n", y, ceil(y), floor(y));


    //Logarithms
    printf("Natural Log of %d is %lf\n", x, log(x));
    printf("Log base 10 of %d is %lf\n", x, log10(x));



    return 0;
}