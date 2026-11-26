/*
Prime Number: Take a number as input and check whether it is a prime number.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    
    if (n < 2) {
        cout << n << " is not a prime number." << endl;
        return 0;
    }
    
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }
    
    if (count == 2)  // only divisible by 1 and itself
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;
}