/*
Prime Numbers in a Range: Take two numbers as input and print all prime numbers between them.
*/
#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int start, end;
    
    cout << "Enter two numbers (start and end): ";
    cin >> start >> end;
    
    // Swap if start is greater than end
    if (start > end) {
        swap(start, end);
    }
    
    cout << "Prime numbers between " << start << " and " << end << " are:" << endl;
    
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}