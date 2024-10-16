#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error: Cannot divide by zero." << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1;
            break;
    }

    cout << num1 << " " << operation << " " << num2 << " = " << result << endl;

    return 0;
}
