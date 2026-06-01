
#include<iostream>
using namespace std;
int main(){
	double num1;
	double num2;
	char opt ;
	cout << "Enter first number:" <<endl;
	cin >> num1;
	 cout << "Enter operator (+,-,*,/):";
	 cin >> opt;
	 cout << "Enter second number:"  <<endl;
	cin >> num2;
	
	
	switch(opt){ 
	case '+': cout<< "Result" << num1+num2;
	 break;
	
	 
	case '-': 
	cout<< "Result" <<num1-num2; 
	break;
	
	case '/':
	 cout<< "Result"<< num1/num2; 
	 break;
	case '*':
	 cout<< "Result" <<num1*num2; 
	break;
	default: cout<<"input valid operator!!!!";
	}
	

	
	return 0;

}
