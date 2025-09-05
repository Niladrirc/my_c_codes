#include <stdio.h>
#include <math.h>

int main()
{
    double principal = 0.0;
    double rate = 0.0;
    double time = 0.0;
    double interest = 0.0;

    int choice = 0;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the interest rate p.a: ");
    scanf("%lf", &rate);

    printf("Enter time duration: ");
    scanf("%lf", &time);

    printf("Select the type of interest to be calculated:\n1. Simple Interest\n2. Compound Interest\nYour choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        interest = (principal * rate * time) / 100;
        break;
    case 2:
        interest = principal * (pow((1 + rate / 100), time) - 1);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }

    printf("The calculated interest is: %.2lf\n", interest);
    return 0;
}