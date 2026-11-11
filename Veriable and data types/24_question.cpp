/*Input two numbers and swap their values using a temporary variable.
*/

#include <iostream>
using namespace std;

int main() {
    int first, second, temp;

    //  Input two numbers
    cout << "Enter first integers : ";
    cin >> first;
    cout<<"Enter second integers : ";
    cin>> second;

    // Swap values
    temp = first;
    first = second;
    second = temp;

    // Display swapped values
    cout << "After swapping: " << first << " " << second << endl;
    return 0;
}
