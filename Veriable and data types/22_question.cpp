/* Input kilometers and convert them into meters and centimeters.*/

#include <iostream>
using namespace std;

int main() {
    float kilometers, meters, centimeters;

    //Input kilometers
    cout << "Enter distance in kilometers: ";
    cin >> kilometers;

    //Convert units
    meters = kilometers * 1000.0f;
    centimeters = kilometers * 100000.0f;

    //  Display results
    cout << "Meters = " << meters << endl;
    cout << "Centimeters = " << centimeters << endl;
    return 0;
}
