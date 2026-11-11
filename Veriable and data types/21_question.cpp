/* Input a product price and quantity and calculate the total bill.
*/
#include <iostream>
using namespace std;

int main() {
    float price, totalBill;
    int quantity;

    //  Input price and quantity
    cout << "Enter price : ";
    cin >> price;
    cout<<"Enter quantity : ";
    cin>> quantity;

    // Calculate total bill
    totalBill = price * quantity;

    //  Display bill
    cout << "Total Bill = " << totalBill << endl;
    return 0;
}
