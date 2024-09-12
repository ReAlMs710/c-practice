#include <iostream>
using namespace std;

int main() {
    char operation;
    int num1, num2;

    // Ask for user input
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the operation
    switch(operation) {
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
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        case '%':
            if(num2 != 0)
                cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
            else
                cout << "Error! Modulus by zero." << endl;
            break;
        default:
            cout << "Error! Invalid operator." << endl;
            break;
    }

    return 0;
}
