#include <stdio.h>

int q223() {
	int num1, num2, num3;

	printf("Enter three integers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	int largest, smallest;

	// Initialize the largest and smallest variables
	largest = smallest = num1;

	if (num2 > largest) {
		largest = num2;
	}

	if (num3 > largest) {
		largest = num3;
	}

	if (num2 < smallest) {
		smallest = num2;
	}

	if (num3 < smallest) {
		smallest = num3;
	}

	printf("The largest integer is: %d\n", largest);
	printf("The smallest integer is: %d\n", smallest);

	return 0;
}




int q224() {
	int num;

	printf("Enter an integer: ");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("%d is an even number.\n", num);
	}
	else {
		printf("%d is an odd number.\n", num);
	}

	return 0;
}
int q225() {
	// Define the characters for each line of the block letters
	char letterC[] =
		" CCCC\n"
		"C    \n"
		"C    \n"
		"C    \n"
		" CCCC\n";

	char letterG[] =
		" GGG \n"
		"G   G\n"
		"G    \n"
		"G  GG\n"
		" GGG \n";

	// Print the initials
	printf("%s\n\n", letterC);
	printf("%s\n\n", letterG);

	return 0;
}
int q226() {
	int num1, num2;

	printf("Enter the first integer: ");
	scanf("%d", &num1);

	printf("Enter the second integer: ");
	scanf("%d", &num2);

	if (num2 == 0) {
		printf("Cannot determine if %d is a multiple of 0.\n", num1);
	}
	else if (num1 % num2 == 0) {
		printf("%d is a multiple of %d.\n", num1, num2);
	}
	else {
		printf("%d is not a multiple of %d.\n", num1, num2);
	}

	return 0;
}
int q2271() {
	printf("    *    \n");
	printf("   ***   \n");
	printf("  *****  \n");
	printf(" ******* \n");
	printf("*********\n");

	return 0;
}
int q2272() {
	printf("    *\n   ***\n  *****\n *******\n*********\n");

	return 0;
}
int q231() {
	printf("Number  Square  Cube\n");
	printf("-------------------\n");

	for (int i = 1; i <= 10; i++) {
		int square = i * i;
		int cube = i * i * i;
		printf("%6d  %6d  %4d\n", i, square, cube);
	}

	return 0;
}
int main() {
	q223();
	q224();
	q225();
	q226();
	q2271();
	q2272();
	q231();
}