/*
 Positive, Negative, or Zero: Take a number as input and check whether it is positive, negative, or
zero
*/

#include <iostream>
using namespace std;

int main( ) {
	int a;
	
	cout<<"enter number : ";
	cin>>a;  //-->> input
	
	//condition
	if(0!=1<=a){
		cout<<"positive";
	}else if (a<=-1){
		cout<<"negative";
	}else if(a==0){
		cout<<"zero";
	}
	
	return 0;
	
}