/* Input marks of three subjects and calculate their average.
*/

#include <iostream>
using namespace std;

int main() {
    float marks1, marks2, marks3, average;

    // Input marks
    cout << "Enter marks of first subject : ";
    cin >> marks1;
    cout<<"Enter marks of second subject : ";
    cin>> marks2;
    cout<<"Enter marks of third subject : ";
    cin>>marks3;

    // Calculate average
    average = (marks1 + marks2 + marks3) / 3.0f;

    // Display average
    cout << "Average = " << average << endl;
    return 0;
}
