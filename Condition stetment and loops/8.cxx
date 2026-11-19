/*
Vowel or Consonant: Take an alphabet character as input and determine whether it is a vowel or a consonant.
*/

#include <iostream>
using namespace std;

int main (){
	string a;
	
	cout <<"enter the alphabet and check vowel and consonant : ";
	cin>>a;//-->>input
	
	//condition
	if (a=="a" || a=="e" || a=="i" || a=="o" || a=="u" || a=="A" || a=="E" || a=="I" || a=="O" || a=="U"){
		cout<<"vowel : "<<a;
		
	}else{
		cout<<"consonant : "<<a;
	}
	return 0;
	
}