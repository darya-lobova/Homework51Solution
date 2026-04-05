#include "logic.h"

double power(double number, int x) {

	double result = 1;

	if (number == 0) {
		return -1;
	}

	if (x == 0) {
		return 1;
	}

	for (int i = 0; i < x; i++)
	{
		result *= number;
	}

	return result;

}