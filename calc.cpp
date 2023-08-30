#include <iostream>

using namespace std;

int main() {
    char operatorSymbol;
    double num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operatorSymbol;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operatorSymbol) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operator." << endl;
            break;
    }

    return 0;
}