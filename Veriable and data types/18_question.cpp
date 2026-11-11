/*Input principal, rate, and time and calculate simple interest.
*/

#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, simpleInterest;

    //  Input principal, rate and time
    cout << "Enter principal : ";
    cin >> principal;
    cout<<"Enter rate : ";
    cin>> rate;
    cout<<"Enter time : ";
    cin>> time;

    //  Simple interest formula
    simpleInterest = (principal * rate * time) / 100.0f;

    //  Display interest
    cout << "Simple Interest = " << simpleInterest << endl;
    return 0;
}
