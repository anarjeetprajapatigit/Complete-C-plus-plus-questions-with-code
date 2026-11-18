/* Divisibility Check: Take a number as input and check whether it is divisible by both 5 and 11.
*/

# include <iostream>
using namespace std;

int main ( ){
	int a = 5;
	int b= 11;
	int c;
	
	 cout<<"Enter the number and check divisible by both 5 and 11 : ";
	 cin >>c;
	 
	  if (c/a==0 && c/b==0 ){
	  	cout<<"this number is divisible : "<<c;
	  }else{
	  	cout <<"this number is not divisble : "<<c;
	  }
	  return 0;
	
}