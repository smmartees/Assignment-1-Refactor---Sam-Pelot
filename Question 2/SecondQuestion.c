// Question 2: covert my age in years to days and displays both values.

// Samp - prog71990 - fall24 - week 2 - assignment 1

#include <stdio.h>

#define DAYS_PER_YEAR	365

int main(void) {

	// input
	int myAgeInYears = 30;

	// process
	int myAgeInDays = myAgeInYears * DAYS_PER_YEAR;

	// output
	printf("Your age in years is: %d\n", myAgeInYears);
	printf("Your age in days is: %d\n", myAgeInDays);

	return 0;
}