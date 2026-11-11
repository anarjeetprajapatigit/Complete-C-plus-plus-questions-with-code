/* English Question: Input three integers and calculate their total.
*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, total;

    // Input three integers
    cout << "Enter first number :  ";
    cin >> num1;
    cout << "Enter second number :  ";
    cin >> num2;
    cout << "Enter third number :  ";
    cin >> num3;

    //  Calculate the sum
    total = num1 + num2 + num3;

    //  Display the result
    cout << "Total = " << total << endl;
    return 0;
}
