#include <stdio.h>
#include <string.h>

int main() {
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    _Bool toPrint = 1;    

    printf("Enter the age of candidate: ");
    scanf("%d", &age);

    printf("\nEnter the GPA of the candidate: ");
    scanf("%f", &gpa);

    if (gpa >= 9.00f && gpa < 10.00f) 
    {
        grade = 'S';
    } else if (gpa >= 8.00f && gpa < 9.00f)
    {
        grade = 'E';
    } else if (gpa >= 7.00f && gpa < 8.00f)
    {
        grade = 'A';
    } else if (gpa >= 6.00f && gpa < 7.00f)
    {
        grade = 'B';
    } else if (gpa >= 5.00f && gpa < 6.00f)
    {
        grade = 'C';
    } else if (gpa >= 4.00f && gpa < 5.00f)
    {
        grade = 'D';
    } else if (gpa < 4.00f)
    {
        grade = 'F';
    } else
    {
        printf("Invalid GPA entered.\n");
        toPrint = 0;
    }

    // printf("\nEnter grade of the candidate: ");
    // scanf(" %c", &grade); -> Mark the space before %c. This is done to consume any leftover whitespace characters in the input buffer.

    getchar(); // Consume the newline character left by previous input
    printf("\nEnter name of the candidate: ");
    // scanf("%s", &name); -> scanf can't read any whitespaces. So, if you enter your full name (any string with whitespaces); scanf only reads the first word. Use fgets instead.
    fgets(name, sizeof(name), stdin); // fgets by default reads until a newline is encountered. it also considers the newline as input.
    // This means Niladri is read as Niladri\n\0.
    name[strlen(name) -1] = '\0'; // Remove the newline character added by fgets


    if (toPrint)
    {
        printf("Hello %s.\nYour age is %d.\nYour GPA is %.2f.\nYour grade is %c.\n", name, age, gpa, grade);
    }

    return 0;

}