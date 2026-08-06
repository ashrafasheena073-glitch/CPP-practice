#include <iostream >
using namespace std ;


int main (){
	int num ;
	cout<<"enter the number to get its table " <<endl;
	cin >>num;
	cout << "The number you enterd is " << num <<endl;
	int i;
	for(i=1; i<=10; i++){cout << num <<"*" << i <<"="<<(num*i)<<endl;
	}
	
	
	return 0;
	
}
