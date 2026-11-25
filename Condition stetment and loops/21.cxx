/*Reverse a Number: Take a number as input and print it in reverse order.
*/

#include <iostream>
using namespace std;

int main() {
    int a, rev = 0;
    
    cout << "enter number : ";
    cin >> a;//input
    
    while (a != 0) {
        int digit = a % 10;     // get last digit
        rev = rev * 10 + digit; // append digit
        a = a / 10;             // remove last digit
    }
    
    cout << "Reversed = " << rev << endl;
    return 0;
}