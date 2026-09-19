#include <iostream>
using namespace std;

int main() {
    long double num1, num2;
    cout << "Enter first number : ";
    cin >> num1;

    cout << "Enter second number : ";
    cin >> num2;

    char operation;
    cout << "Enter the operation you want to perform (+, -, *, /) : ";
    cin >> operation;

    switch (operation) {
        case '+' :
            cout << num1 + num2;
            break;
        case '-' :
            cout << num1 - num2;
            break;
        case '*' :
            cout << num1 * num2;
            break;
        case '/' :
            if (num2 != 0) {
                cout << num1 / num2;
            } else {
                cout << "Error: Division by zero!";
            }
            break;
        default :
            cout << "Error: Invalid operator!";

    }

    return 0;
}