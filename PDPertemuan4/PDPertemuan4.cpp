#include <iostream>
using namespace std;

float Luaspersegipanjang(float p, float l) {
	return p * l;
}

float Luassegitiga(float a, float t) {
	return 0.5 * a * t;
}

float luaslungkaran(float r) {
	return 3.14 * r * r;

}




int main() {
	float panjang, lebar, tinggi, jejari, alas;
	int pilihan;



	cout << "------------------------" << endl;
	cout << "----------MENU----------" << endl; 
	cout << "------------------------" << endl; 

	cout << "1. LuasPersegiPanjang" << endl;
	cout << "2. Luas Segitiga" << endl; 
	cout << "3. LuasLingkaran" << endl;
	cout << "4. Exit" << endl;

	cout << "Masukkan Pilihan : ";
}