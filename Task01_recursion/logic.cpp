#include "logic.h"

int count_digits(int number) {

	//active fool-proof
	number = number < 0 ? -number : number;

	//base case
	if (number < 10) {
		return 1;
	}

	//recursion case
	return 1 + count_digits(number / 10);
}