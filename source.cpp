#include <iostream>

using namespace std;

int main() {


	int num1, num2;
	char operation;

	cout << "Enter two operands: ";

	cin >> num1 >> num2;

	cout << "Enter an operation: (*, /, +, -)" << endl;

	cin >> operation;

	switch (operation) {

	case '*':
		cout << "Sum of both operands = " << num1 * num2 << endl;
		break;

	case '+':
		cout << "Sum of both operands = " << num1 + num2 << endl;
		break;

	case '-':
		cout << "Difference of both operands = " << num1 - num2 << endl;
		break;

	case '/':
		cout << "Quotient of both operands = " << num1 / num2 << endl;
		break;

	default:
		cout << "Wrong operation and/or wrong operand!";
		break;

	}
	
	return 0;

}