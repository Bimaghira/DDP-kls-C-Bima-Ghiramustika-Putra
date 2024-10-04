#include <iostream>
using namespace std;

int main(){
	cout << " ## Program Menghitung Gaji Karyawan ## " << endl;
	cout << "________________________________________" << endl;
	cout << endl;
	
	string nama;
	char golongan;
	int jam_kerja, upah_per_jam, total_upah;
	
	//proses input 
	cout << "Nama Karyawan : ";
	getline (cin ,nama);
	
	cout <<"Golongan : " ;
	cin >> golongan ;
	
	cout << "Jumlah Jam Kerja : ";
	cin >> jam_kerja;
	
	//tentukan jumlalh upah per jam berdasarkan golongan
	switch (golongan) {
		case 'a':
			upah_per_jam= 5000;
			break;
		case 'b':
			upah_per_jam=7000;
			break;
		case 'c':
			upah_per_jam=8000;
			break;
		case 'd':
			upah_per_jam=10000;
			break;
	} 
	total_upah = jam_kerja * upah_per_jam;
	
	// cek apakah jam kerja lebih dari 48 jam
	if ( (jam_kerja - 48) > 0) {
		total_upah = total_upah + ((jam_kerja - 48)*4000);
	}
	
	//proses output
	cout << endl;
	cout << nama << " menerima Rp." << total_upah << " per minggu" ;
	cout << endl;
}
