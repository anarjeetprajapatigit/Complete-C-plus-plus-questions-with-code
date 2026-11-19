/* 
Voting Eligibility: Take the user's age as input and determine whether they are eligible to vote (age
18 or above).
*/

# include <iostream>
using namespace std;

int main ( ){
	int a;
	
	 cout<<"Enter the number and check eligible to vote : ";
	 cin >>a;//-->>input
	 
	 //condition
	  if (a>=18 ){
	  	cout<<"eligible for voting : "<<a;
	  }else if (a<=18){
	  	cout <<"you are not eligible for voting : "<<a;
	  }
	  return 0;
	
}