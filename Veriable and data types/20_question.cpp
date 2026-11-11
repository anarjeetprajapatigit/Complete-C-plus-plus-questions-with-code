/* Input birth year and current year and calculate age.
*/

#include <iostream>
using namespace std;

int main() {
    int birthYear, currentYear, age;

    // Input years
    cout << "Enter birth year : ";
    cin >> birthYear;
    cout<<"Enter current year : ";
    cin >> currentYear;

    // Calculate age
    age = currentYear - birthYear;

    // Display age
    cout << "Age = " << age << " years" << endl;
    return 0;
}
