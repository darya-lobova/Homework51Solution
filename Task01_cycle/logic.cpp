#include "logic.h"

int count_digits(int number) {

	number = number < 0 ? -number : number;

	if (number < 10) {
		return 1;
	}

	int count = 0;

	while (number > 0) {
		number /= 10;
		count++;
	}

	return count;
}