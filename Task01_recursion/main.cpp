#include "logic.h"

int main() {

	int number;

	cout << "Input any number: ";
	cin >> number;

	int result = count_digits(number);

	cout << "Number of digits: " << result;

	return 0;
}