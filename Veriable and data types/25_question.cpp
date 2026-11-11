/*Input obtained marks and total marks and calculate percentage.
*/
#include <iostream>
using namespace std;

int main() {
    float obtainedMarks, totalMarks, percentage;

   
    cout << "Enter obtained marks : ";
    cin >> obtainedMarks;
    cout<<"Enter total marks : ";
    cin>> totalMarks;

    
    percentage = (obtainedMarks / totalMarks) * 100.0f;

   
    cout << "Percentage = " << percentage << "%" << endl;
    return 0;
}
