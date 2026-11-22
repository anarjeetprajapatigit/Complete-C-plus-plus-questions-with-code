/*Count Digits: Take an integer as input and count how many digits it contains.
*/

#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    // Handle the case when number is 0
    if (num == 0) {
        count = 1;
    } else {
        // Handle negative numbers by making them positive
        if (num < 0) {
            num = -num;
        }
        
        // Count digits using a loop
        while (num > 0) {
            num = num / 10;   // Remove last digit
            count++;          // Increment counter
        }
    }
    
    cout << "Number of digits: " << count << endl;
    
    return 0;
}