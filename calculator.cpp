#include <iostream>
using namespace std;
int main(){
	string operation;
	double  number1 ,number2;
	
	
	cout<<"Enter the 1st number:" <<endl;
	cin>> number1;
	cout <<"Enter operation (+,-,*,/)" <<endl;
	cin >> operation;
	cout<<"Enter the 2nd number:" <<endl;
	cin>> number2;
	 cout<< "your answer is:";
	if(operation=="+"){
		cout << number1+number2;
	}
	else if(operation=="-"){
		cout << number1-number2;
	}
	else if(operation=="*"){
		cout << number1*number2;
	}
	
	else if(operation=="/"){
		cout << number1/number2;
		
	}
	else {cout<< "invalid operator";
	}
	
	return 0;
	
	
	
	
	
}
