/*
Print N to 1: Take N as input from the user and print the counting in reverse, from N to 1.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;//-->>input

	//loops
    for (int i = n; i >= 1; i--) {
        cout << i << endl;
    }

    return 0;
}