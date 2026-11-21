/*
Sum of N Natural Numbers: Take N as input and calculate the sum of all numbers from 1 to N.
*/
	
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;//-->>input

	//loops
    for (int i = 1; i <= n; i++) {
        
        cout << i << " ";
    }

    return 0;

}