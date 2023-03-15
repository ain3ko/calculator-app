#include <iostream>
using namespace std;

int kubus(int s){
	int vkbs;
	vkbs = s*s*s;
	return vkbs;
}
int balok(int p, int l, int t){
	int vblk;
	vlbk = p*l*t;
	return vblk;
}
kerucut(int r, int t){
	int vkrc;
	const float pi = 3.14;
	vkrc = 1/3 * pi * r * r * t;
	return vkrc;
}
int bola(int r){
	int vbla;
	const float pi = 3.14;
	vbla = 4 * pi * r *r;
	return vbla;
}
int main(){
	int pilihan;
	cout<<"\tKalkulator bangun ruang"<<endl;
	cout<<"\t1. Kalkulator Kubus"<<endl;
	cout<<"\t2. Kalkulator Balok"<<endl;
	cout<<"\t3. Kalkulator Kerucut"<<endl;
	cout<<"\t4. Kalkulator Bola"<<endl;
	cout<<endl;
	cout<<"\t Masukkan 	Pilihan : ";
	cin pilihan;
	if (pilihan == 1){
		int sisi;
		cout<<"Masukkan sisi: ";
		cin>>sisi;
		kubuc(sisi);
	}
}
