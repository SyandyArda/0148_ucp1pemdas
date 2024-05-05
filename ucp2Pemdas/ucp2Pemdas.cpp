#include <iostream>
using namespace std;

void display() {
	cout << "Nama Kota " << "  Status "<< endl;
}
struct bekasi {
	string lokasiA;
	string lokasiB;
	string lokasiC;
};
struct tangerang {
	string lokasi1;
	string lokasi2;
	string lokasi3;
};

int main() {
	int status1 = bekasi;
	int status2 = tangerang;
	int rerata = 45;
	if (bekasi > 45) {
		cout << status1 << "Tidak sehat " << endl;
		}
	else {
		cout << status1 << "Sehat " << endl;
		}

	if (tangerang > 45) {
		cout << status1 << "Tidak sehat " << endl;
	}
	else {
		cout << status1 << "Sehat " << endl;
	}
};







//1. int umur, string (nama), array (nilai)

//5. struct mahasiswa {
//string nim;
//string nama;
//string alamat;
//int umur;
//}; (struct merupakan tipe data juga, akan tetapi struct dapat menampung banyak tipe data sekaligus)

//2. contoh dari prosedur dan fungsi seperti "void" function, dan "cout" pada "int main"

//3. hello world
//   hello world
//   hello world
//   hello world
//   hello world

//4. contoh implementasi conditional statement 
//   if (nBilA == nBilB) {
//   status = "Bilangannya sama";
//    }
//    else if (nBilA > nBilB) {
//        status = "Bilangan A lebih besar dari bilangan B";
//    }
//
//    else
//    {
//        status = " Bilangan A lebih kecil dari bilangan B";
//    } 