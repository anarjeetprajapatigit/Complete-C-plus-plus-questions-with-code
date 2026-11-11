/* Write a C++ program to calculate the area of a circle by taking its radius as input from the user.
*/

#include <iostream>
using namespace std;

int main() {
    double r;
    const double PI = 3.14159;

    cout << "Enter radius: ";
    cin >> r;//->> input radius

    double area = PI * r * r;

    cout << "Circle Area = " << area << endl;

    return 0;
}