#include <iostream>
using namespace std;

class Mahasiswa {
public: // akses modedifier 
	string nama;
	int umur;
	string jurusan;

	void output() {
		cout << "nama: " << nama << endl;
		cout << "umur: " << nama << endl;
		cout << "jurusan: " << nama << endl;
	}
};

class matakuliah {
private:
	string kodemk;
	string namamk;
	int sks;
public:
	void input() {
		cout << "kode mk: ";
		cin >> kodemk;
		cout << "nama mk; ";
		cin >> namamk;
		cout << "sks: ";
		cin >> sks;
	}
	void output() {
		cout << "kode mk: " << kodemk << endl;
		cout << "nama mk: " << kodemk << endl;
		cout << "sks " << kodemk << endl;
	}
};

int main() {
	Mahasiswa mhs;
	matakuliah mk;

	mhs.nama = "budi";
	mhs.umur = 20;
	mhs.jurusan = "teknik informatika";
	mhs.output();

	mk.input();
	mk.output();

	return 0;
}



	


	


