#include <iostream>
using namespace std ;

int main(){
	cout << "## Program c++ menghitung luas lingkaran ##" << endl;
	cout << "-------------------------------------------" << endl;
	cout << endl;
	
	float r, luas;
	
	cout << "input jari jari lingkaran : " ;
	cin >> r;
	luas = 3.14 * r * r;
	
	cout << "luas lingkaran = " << luas << endl;
	
	return 0; 
}
