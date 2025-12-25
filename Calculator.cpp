#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "------------------------------------" << endl;
    cout << "      Simple C++ Calculator         " << endl;
    cout << "------------------------------------" << endl;

    // User inputs the operator (+, -, *, /)
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // User inputs the two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "------------------------------------" << endl;

    // Switch statement to perform the calculation
    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;

        case '*':
            cout << num1 * num2 << " = " << num1 * num2 << endl;
            break;

        case '/':
            // Check for division by zero
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero is not allowed." << endl;
            break;

        default:
            // If the operator is not +, -, *, or /
            cout << "Error! Operator is not correct." << endl;
            break;
    }

    return 0;
}