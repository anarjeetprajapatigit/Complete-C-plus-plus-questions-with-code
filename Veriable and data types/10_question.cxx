/*Write a C++ program to swap two numbers using a third variable.
*/


#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    
    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;
    
    cout << "After swapping:" << endl;
    cout << "First number = " << a << endl;
    cout << "Second number = " << b << endl;
    
    return 0;
}