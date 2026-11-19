/*
Leap Year: Take a year as input and check whether it is a leap year.
*/

#include <iostream>
using namespace std;

int main( ){
	int year;
	
	cout<<"enter year and check leap year : ";
	cin>>year;//-->>input
	
	//condition
	if(year%4==0){
		cout<<"this is leap year : "<<year;
	}else{
		cout<<"this is not leap year : "<<year;
	}
	return 0;	
}