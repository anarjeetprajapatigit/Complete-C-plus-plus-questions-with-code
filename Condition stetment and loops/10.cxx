/* Marks and total: Take the marks for 2 subjects as input and print the total.
*/

#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	
	//input
	cout<<"Enter marks(math) : ";
	cin>>a;//-->>input
	cout<<"Enter marks(science) : ";
	cin>>b;//-->>input
	
	cout<<"tatal marks : "<<a+b<<"/100"<<endl;//-->>total marks print
	
	return 0;
}