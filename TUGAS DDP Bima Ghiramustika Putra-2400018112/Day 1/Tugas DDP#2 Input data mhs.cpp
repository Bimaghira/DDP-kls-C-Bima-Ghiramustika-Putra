#include <iostream>
#include <string>
using namespace std;

struct mahasiswa{
    string nama;
    string nim;
    string alamat;
};

int main(){
    mahasiswa mhs[50];
    for(int i=0; i<5; i++){
        //[+] Input Data Mahasiswa ke - 1 [+]
        cout << "[+] Masukan Data Mahasiswa ke - " <<i+1 << " [+] " << endl;
        cout << "Masukan Nama: ";
        cin >> mhs[i].nama;
        cout << "Masukan Nim: ";
        cin >> mhs[i].nim;
        cout << "Masukan Alamat: ";
        cin >> mhs[i].alamat;
        cout << "DATA BERHASIL DI INPUT" << endl;
    }
    cout << "NIM\tName\tJurusan" << endl;
    for(int i=0; i<5; i++){
        cout << mhs[i].nama << "\t" << mhs[i].nim << "\t" << mhs[i].alamat << endl;
    }
}
