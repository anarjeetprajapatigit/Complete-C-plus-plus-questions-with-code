/*
Multiplication Table: Take a number as input and print its multiplication table from 1 to 10.
*/

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter the number to see its table: ";
    cin >> num;

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}