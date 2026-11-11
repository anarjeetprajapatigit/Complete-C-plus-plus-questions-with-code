/*Input Celsius and convert it to Fahrenheit. Formula: F = (C × 9/5) + 32.
*/

#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    // Input Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    //  Display result
    cout << "Fahrenheit = " << fahrenheit << endl;
    return 0;
}
