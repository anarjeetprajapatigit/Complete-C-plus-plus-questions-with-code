/*Even or Odd: Take an integer as input from the user and determine whether it is even or odd.
 */

#include <iostream>
using namespace std;

int main( ) {
	int a;
	
	cout<<"enter number : ";
	cin>>a;
	
	if(a%2==0){
		cout<<"even";
	}else{
		cout<<"odd";
	}
	return 0;
	
}