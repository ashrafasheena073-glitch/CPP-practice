#include <iostream>
using namespace std;
int main (){
 // conversion of data from one type to another 
 
 //of two type (type casting )explicit and (type conversion )implicit
 // conversion  is done automatically by program (small value to large one )
 // casting  is done by programer (large to small)
//int, float ---> 4 bytes ,bool , char --->1 byte, double ----> 8 byte	


cout << "implicit"<<endl;
char grade ='A';
int value = grade;
 cout << value << endl ;
 double he =22.444;
 int by = he;
 cout << by <<endl;
 
 cout << "explicit" <<endl;
 float pi = 3.14;
 int hi = pi;
 cout << hi;
	return 0;
}
