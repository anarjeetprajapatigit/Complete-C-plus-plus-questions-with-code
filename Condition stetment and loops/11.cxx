/*
Number from 1 to 10: Take a number as input and check whether it is between 1 and 10.
*/

#include <iostream>
using namespace std;

int main() {
    int a;
    
    cout << "Enter a number to check if it's between 1 and 10: ";
    cin >> a;//-->>input

   //condition
    if (a >= 1 && a <= 10) {
        cout << "Yes, " << a << " is between 1 and 10." << endl;
    } else {
        cout << "No, " << a << " is not between 1 and 10." << endl;
    }

    return 0;
}