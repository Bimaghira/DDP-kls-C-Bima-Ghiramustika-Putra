#include <iostream> //cin-out
#include <conio.h> //getch

using namespace std;


int main(){
	char nim[10]; //gunakan cin
	double nohp;
	string ucapan="halo seelamat datang ",nama ,prodi,alamat;
	
	
	//masukkan
	cout << "masukkan nama   : ";getline(cin,nama);//getlaine inputdata lebih dari 1 kata
	cout << "masukkan nim    : ";cin>>nim;
	cout << "masukkan prodi  : ";cin>>prodi;
	cout << "masukkan alamat : ";cin>>alamat;
	
	cout<<endl<<endl;
	
	
	//keluaran
	cout<<ucapan<<"" <<nama <<" di UNIVERSITAS AHMAD DAHLAN"<< endl;
	
	cout<< "\nnama    : "<<nama;
	cout<< "\nnim     : "<<nim;
	cout<< "\nprodi   : "<<prodi;
	cout<< "\nalamat  : "<<alamat;
	
	
	getch; //menahan program
	
}
