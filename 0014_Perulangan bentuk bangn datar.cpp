#include <iostream>
/*
Tugas Kasus Perulangan - Membuat segitiga dengan karakter bintang
Nama : Aris Mahmudi
NPM  : 2113020015
Kelas: TI 1A
*/
using namespace std;

int main() {
	int T, b, ulang;
	cout<<"Masukkan tinggi segitiga :";
	cin>>T;
	b=T;
	cout<<"Anda ingin perulangan berapa kali :";
	cin>>ulang;
	T=T-1;
	do{
		//membuat setengah segitiga 
		for(int a = 0; a<=T; a++) {
		cout<<" *";
		for(int c = 1; c<=a; c++){
			cout<<" *";
		}
			cout<<endl;
		}
		b=T;
		//membuat setengah segitiga terbalik
		for(int i=1; i<=T; i++) {
		cout<<" *";
		for(int k = b; k>=2; k--) {
			cout<<" *";
		}
		b--;
		cout<<endl;
		}
		
		ulang--;
		} while (ulang>0); //akan diulangi selama hasil ulang
		return 0;
}
