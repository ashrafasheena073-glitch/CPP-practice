#include <iostream >
using namespace std;

int main (){
	int num, orignal , reverse=0 , remainder;
	cout<<"ENTER NUMBER :" ;
	cin>>num;
	orignal = num;
	while ( num != 0) { 
	remainder = num%10;
	reverse= reverse*10 +remainder;
	num =num/10;
	}
	if (orignal==reverse ){cout <<"palindrome";

	}
	else {cout << "not a palindrome";
	}
	return 0;
}
