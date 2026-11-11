/* Input total seconds and convert them into hours, minutes, and remaining seconds.
*/

#include <iostream>
using namespace std;

int main() {
    int totalSeconds, hours, minutes, remainingSeconds;

    // Input total seconds
    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    //Calculate time parts
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    remainingSeconds = totalSeconds % 60;

    // Display results
    cout << "Hours = " << hours << endl;
    cout << "Minutes = " << minutes << endl;
    cout << "Remaining Seconds = " << remainingSeconds << endl;
    return 0;
}
