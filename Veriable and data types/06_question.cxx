/* Write a C++ program to input two numbers from the user and calculate their remainder(%). Display the result on the screen.
*/

#include <iostream>
using namespace std;

int main( ) {
	int a;
	int b;
	
	cout<<"enter first number : ";
	cin>>a;
	cout<<"enter second number : ";
	cin>>b;
	
	cout<<"remaimder(%) = ";
	cout<<a%b;
}