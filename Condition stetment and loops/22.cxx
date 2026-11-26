/*
Palindrome Number: Take a number as input and check whether it is a palindrome.
*/

#include <iostream>
using namespace std;

int main() {
    int a, original, rev = 0;
    
    cout << "enter number : ";
    cin >> a;
    
    original = a;          // original value save karo
    
    while (a != 0) {
        int digit = a % 10;       // last digit nikalo
        rev = rev * 10 + digit;   // reverse me add karo
        a = a / 10;               // last digit hatao
    }
    
    if (original == rev)
        cout << original << " is a Palindrome" << endl;
    else
        cout << original << " is NOT a Palindrome" << endl;
    
    return 0;
}