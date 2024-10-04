#include <iostream>
using namespace std;

int main(){
	int pilihan;
	char ulang;
	do
	{
		cout << "## Daftar Menu ## " << endl;
		cout << "__________________" << endl;
		cout << "1. Espresso" << endl;
		cout << "2. Cappuccino" << endl;
		cout << "3. Vanilla Latte" << endl;
		cout << "4. Huzelnut Latte" << endl;
		cout << "5. Mie Goreng" << endl;
		cout << endl;
		
		cout << "pilahan anda : ";
		cin >> pilihan;
		
		switch (pilihan){
			case 1:
				cout << "Anda Memilih Espresso" << endl;
				break;
			case 2:
				cout << "Anda Memilih Cappuccino" << endl;
				break;
			case 3:
				cout << "Anda Memilih Vanilla Latte" << endl;
				break;
			case 4:
				cout << "Anda Memilih Huzelnut Latte" << endl;
			case 5:
				cout << "Anda Memilih Mie Goreng" << endl;
				break;
			default:
				cout << "Menu Tidak Tersedia" << endl;
		} 
		cout << endl;
		
		cout << "Ingin memilih menu lain (y/t)?";
		cin >> ulang;
		cout << endl;
	
	}
	while ( ulang!= 't');
		
	cout << "Terimakasih Pesanann Anda Segera kami Proses...";
		
	cout << endl ;
	return 0;
}
