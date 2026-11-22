/*
Sum of Digits: Take a number as input and calculate the sum of all its digits.
*/


#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, digit;
    
    cout << "Enter a number: ";
    cin >> num;
    
    // Handle negative numbers by making them positive
    if (num < 0) {
        num = -num;
    }
    
    // Handle the case when number is 0
    if (num == 0) {
        sum = 0;
    } else {
        // Loop to extract each digit and add to sum
        while (num > 0) {
            digit = num % 10;   // Get last digit
            sum = sum + digit;  // Add digit to sum
            num = num / 10;     // Remove last digit
        }
    }
    
    cout << "Sum of digits: " << sum << endl;
    
    return 0;
}