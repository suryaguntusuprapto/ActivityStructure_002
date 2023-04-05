#include <iostream>
using namespace std;

struct Mahasiswa {
	string NIM;
	string Nama;
	string alamat;
	int umur;

};

int main() {
	Mahasiswa mhs;

	cout << "Masukkan NIM = ";
	cin >> mhs.NIM;
	cout << "Masukkan Nama = ";
	cin >> mhs.Nama;
	cout << "Masukkan Alamat = ";
	cin >> mhs.alamat;
	cout << "Masukkan Umur = ";
	cin >> mhs.umur;

	cout << "\nNIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.Nama;
	cout << "\nAlamat = " << mhs.alamat;
	cout << "\nUmur = " << mhs.umur;
}