#include <iostream>
using namespace std;

int main(){
	cout << "## Program C++ konversi detik ke menit dan jam ##" << endl;
	cout << "=================================================" << endl;
	cout << endl;
	
	int detik, menit, jam;
	
	cout << "masukkan jumlah detik: ";
	cin >> detik;
	
	menit = detik/60;
	detik = menit%60;
	
	jam = menit / 60;
	detik = detik%60;
	
	cout << "hasil konversi: " <<jam<< "jam, " << menit << "menit, " <<detik <<"detik" <<endl;
	
	return 0;
	
}
