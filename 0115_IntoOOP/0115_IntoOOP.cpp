#include <iostream> 
using namespace std;

class Mahasiswa{
public: //akses modifer
	string nama;
	int umur;
	string jurusan;

	void output (){
		cout << "Nama:" << nama << endl;
		cout << "Umur:" << umur << endl;
		cout << "Jurusan:" << jurusan << endl;
	}

};


class Matakuliah {
private:
	string kodeMK;
	string namaMK;
	int sks;
public:
	void input() {
		cout << "KodeMK: ";
		cin >> kodeMK;
		cout << "NamaMK";
		cin >> namaMK;
		cout << "SKS";
		cin >> sks;
	}
	void output() {
		cout << "kode mk: " << kodemk << endl;
		cout << "nama mk: " << kodemk << endl;

	
	}
};


	


	


