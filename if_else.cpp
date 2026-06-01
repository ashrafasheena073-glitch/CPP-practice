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
	
	if(opt== '+'){cout<< "Result= " << num1+num2;
	}
	else if( opt == '-'){cout<< "Result= " << num1-num2;
	}
	else if( opt == '/'){cout<< "Result= " << num1/num2;
	}
	else if( opt == '*'){cout<< "Result= " << num1*num2;
	}
	else { cout << "Input valid operator !!!!";
	}
	
	return 0;}
