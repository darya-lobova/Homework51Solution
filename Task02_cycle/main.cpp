#include "logic.h"

int main() {

	double number;
	int x;

	cout << "Input any number: ";
	cin >> number;

	cout << "Input any power: ";
	cin >> x;

	double result = power(number, x);

	cout << "Result: " << result;

	return 0;
}