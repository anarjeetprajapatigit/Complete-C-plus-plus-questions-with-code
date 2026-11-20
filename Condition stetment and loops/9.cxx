/*
Calculator: Take two numbers and an operator (+, -, *, /) as input and create a calculator.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    string c;

    cout << "enter the first number : ";
    cin >> a;
    cout << "enter the operator (+,-,*,/) : ";
    cin >> c;
    cout << "enter the second number : ";
    cin >> b;

    if (c == "+") {
        cout << a + b;
    } else if (c == "-") {
        cout << a - b;
    } else if (c == "*") {
        cout << a * b;
    } else if (c == "/") {
        if (b == 0)
            cout << "Error: division by zero";
        else
            cout << (double)a / b;   // fixed: a / b, and cast for decimals
    } else {
        cout << "Invalid operator";
    }

    return 0;
}