/*
Print 1 to N: Take N as input from the user and print all numbers from 1 to N.
*/

#include <iostream>
using namespace std;

int main( ){
	int n;
	
	cout<<"Enter number : ";
	cin>>n;//-->>input
	
	//loops
	for(int i=1;i<=n;i++){
		cout<< i<<endl ;
	}

}