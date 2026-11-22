/*
Factorial: Take a number as input and calculate its factorial.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "enter number to calculate factorial : ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial not defined for negative numbers";
        return 1;
    }

    long long fact = 1;// start at 1 (not 0!)
    for (int i = 1; i <= n; i++) {
        fact *= i;// multiply, don't subtract
    }

    cout << n << "! = " << fact;
    return 0;
}