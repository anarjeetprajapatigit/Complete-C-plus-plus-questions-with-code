/*
Multiplication Tables: Take the starting number and ending number as input from the user and

print the multiplication tables for all numbers in that range.
*/

#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    // Swap if start is greater than end
    if (start > end) {
        swap(start, end);
    }

    for (int i = start; i <= end; i++) {
        cout << "\nMultiplication Table of " << i << ":" << endl;
        cout << "------------------------" << endl;

        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << (i * j) << endl;
        }
        cout << endl;
    }

    return 0;
}