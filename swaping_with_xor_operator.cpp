#include <iostream >
using namespace std ;
int main (){
	int a=18;
	int b=19;
	cout<<" before swaping "<< endl;
	cout << "a="<<a <<endl;
	cout << "b="<<b<<endl;
	cout << "after swaping" <<endl;

	a=a^b;
	b=a^b;
	a=a^b;
	cout << "a="<<a <<endl;
	cout << "b="<<b <<endl;
	
	
	
	
	
	
	
	
	
	
	
return 0;
}




