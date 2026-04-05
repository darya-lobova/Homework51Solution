#include "logic.h"

double power(double number, int x) {

	double result = 1;

	if (number == 0) {
		return -1;
	}

	if (x == 0) {
		return 1;
	}

	//base case
	if (x == 1) {
		return number;
	}

	//recursion case
	return number * power(number, (x - 1));

}