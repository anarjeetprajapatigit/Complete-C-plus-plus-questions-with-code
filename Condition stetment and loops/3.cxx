/*
Greatest of Two Numbers: Take two numbers as input and print the greater number
*/

#include <iostream>
using namespace std;

int main( ) {
	int a;
	int b;
	
	cout<<"enter first number : ";
	cin>>a;  //-->> input
	cout<<"enter second number : ";
	cin>>b;//-->> input
	
	
	//condition
	if(a>b || a<b){
		if(a>b){
			cout<<"big : "<<a;
		}else if (a<b){
			cout<<"big : "<<b;
		}
	
	}
	return 0;
	
}