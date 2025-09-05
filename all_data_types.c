#include <stdio.h>
#include <stdbool.h>

int main() {
	int integer_1 = 1, integer_2 = 2;
	short s = 32000;
	char c = 'c';
	float f = 3.2458f;
	double d = 535.1545454;
	_Bool boolean = 0;

	bool std_bool = true;

	char name[] = "Niladri";


	printf("Integer values are %d & %d,\nShort value is: %hd,\nCharacter value is %c (equivalent ASCII: %d),\nReal numbers are: %f & %lf,\n", integer_1, integer_2, s, c, c, f, d);
	printf("Boolean represents: ");
	if (boolean) {
		printf("True");
	} else {
		printf("False");
	}
	printf("\n");

	if (std_bool) {
		printf("stdbool.h has been included\n");
	} else {
		printf("stdbool.h include failed\n");
	}

	printf("My name is %s\n", name);

	return 0;
}
