/* Write a C++ program to input a person's first name, last name, current age, and city name from the user. Display all the entered information in a proper format.
*/


#include <iostream>
using namespace std;

int main( ) {
	string first;
	string second;
	int age;
	string city;
	
	cout<<"enter your first name : ";
	cin>>first;
	cout<<"enter your last name : ";
	cin>>second;
	cout<<"enter current age : ";
	cin>>age;
	cout<<"city name : ";
	cin>>city;
	
	
	cout<<"your name : "<<first<<" "<<second<<endl;
	cout<<"age : "<<age<<endl;
	cout<<"city : "<<city<<endl;
}