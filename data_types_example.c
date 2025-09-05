#include<stdio.h>

int main() {
	short s = 32000;	// A short variable with a value close to the upper limit
	int i = 32000;		// An int variable with the same value
	

	// Format specifier %hd is used to print values of short integers, and %d is used for standard integers
    	// In printf, due to integer promotion rules, a short will be promoted to an int
    	// So we can use %d for both while considering range
    	printf("Value of shortVar: %hd\n", s);   // Printing short variable
    	printf("Value of intVar: %d\n", i);        // Printing int variable

    	// Let's go beyond the range of short
    	s = 35000;  // This value exceeds the range of a signed short
    	printf("Value of shortVar after overflow: %hd\n", s);   // Overflow behavior

    	// We can also notice a large difference in range
    	i = 2147483647;  // Max value for int
    	printf("Value of intVar: %d", i);

	return 0;
}

