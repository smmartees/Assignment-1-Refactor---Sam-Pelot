#define _CRT_SECURE_NO_WARNINGS

// Question 3: Get 2 numbers from user, output: sum, product, quotient.

// Samp - prog71990 - fall24 - week 2 - assignment 1

#include <stdio.h>

#define INVALID_FIRST_INPUT		1
#define INVALID_SECOND_INPUT	2

int main(void) {
	
	// Variables
	float firstInput;									// Required Variables for storing input, and processing the required calculations.
	float secondInput;
	float sumResult;
	float productResult;
	float quotientResult;


	// input
	printf("Please inpupt your first number: ");
	int firstScanNum = scanf("%f", &firstInput);		// Scans for user's first number input

	if (firstScanNum != 1) {
		printf("Your first input is invalid.\n");		// displays invalid message for first input
		return INVALID_FIRST_INPUT;
	}
	
	printf("Please input your second number: ");
	int secondScanNum = scanf("%f", &secondInput);		// Scans for user's second number input

	if (secondScanNum != 1) {
		printf("Your second input is invalid.\n");		// displays invalid message for second input
		return INVALID_SECOND_INPUT;
	}

	// process
	sumResult = firstInput + secondInput;			// sums the inputs
	productResult = firstInput * secondInput;		// multiplies the inputs
	quotientResult = firstInput / secondInput;		// divides the first input by the second input

	// output
	printf("The sum of %f and %f is: %f\n", firstInput, secondInput, sumResult);				// printf() for sum calculation
	printf("The product of %f and %f is: %f\n", firstInput, secondInput, productResult);		// printf() for multiplication calculation
	printf("The quotient of %f and %f is: %f\n", firstInput, secondInput, quotientResult);		// printf() for division calculation

	return 0;
}