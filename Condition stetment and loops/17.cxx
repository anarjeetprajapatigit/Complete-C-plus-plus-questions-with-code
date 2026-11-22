/*
Sum of odd Numbers: Take N as input and calculate the sum of all odd numbers from 1 to N.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;//-->>input

    int sum = 0;//->> accumulator BEFORE the loop


    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {  //-->> odd numbers
            sum += i;//-->> add to running total
        }
    }

    cout << "Sum of even numbers from 1 to " << n << " = " << sum << endl;

    return 0;
}