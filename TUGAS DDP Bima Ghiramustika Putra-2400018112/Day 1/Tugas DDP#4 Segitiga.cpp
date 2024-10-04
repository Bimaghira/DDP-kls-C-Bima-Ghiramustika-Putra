#include <iostream>
using namespace std;

int main(){
	cout << "## program c++ segitiga angka ## " << endl ;
	cout << "==================================" << endl;
	cout << endl;
	
	int tinggi_segitiga,i,j;
	
	cout << "input tinggi segitiga : " ;
	cin >> tinggi_segitiga ;
	
	cout << endl ;
	
	for(i=1;i<=tinggi_segitiga;i++){
		for(j=1;j<=i;j++) {
			cout << i<< " " ;
		}
		cout << endl;
	}
	return 0;
	
}
