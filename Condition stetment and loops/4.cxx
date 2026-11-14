/* 
Greatest of Two Numbers: Take two numbers as input and print the greater number.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    //input
    cout << "enter first number : ";
    cin >> a;
    cout << "enter second number : ";
    cin >> b;
    cout << "enter third number : ";
    cin >> c;
    
    //condition
    if (a >= b && a >= c) {
        cout << "big : " << a;
    } else if (b >= a && b >= c) {
        cout << "big : " << b;
    } else {
        cout << "big : " << c;
    }
    return 0;
}