/*
Sum of Even Numbers: Take N as input and calculate the sum of all even numbers from 1 to N.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;//-->>input

    int sum = 0;//->> accumulator BEFORE the loop


    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {  //-->> only even numbers
            sum += i;//-->> add to running total
        }
    }

    cout << "Sum of even numbers from 1 to " << n << " = " << sum << endl;

    return 0;
}