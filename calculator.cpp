#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operation;
    float result;

    // Display menu
    cout << "Welcome to the simple calculator!" << endl;
    cout << "Choose an operation: " << endl;
    cout << "+ : Addition" << endl;
    cout << "- : Subtraction" << endl;
    cout << "* : Multiplication" << endl;
    cout << "/ : Division" << endl;
    cout << "% : Modulo (Remainder)" << endl;
    
    // Input operation
    cout << "Enter your choice (+, -, *, /, %): ";
    cin >> operation;

    // Input numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform operation
    switch(operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = static_cast<float>(num1) / num2; // Cast to float for division
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                cout << "Result: " << num1 << " % " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
            break;
    }

    return 0;
}
