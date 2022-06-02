#include <iostream>
#include <iomanip>
using namespace std;

class Mahasiswa {
	public:
		void input();
		void proses();
		void output();
	private:
		int n, cari, nim[100], noHp[100], U, i, j, Imaks, temp, ketemu;
		string nama[100], prodi[100];
};

void Mahasiswa::input() {
	cout<<"Masukan banyak data = ";
	cin>>n;
	for(int i=0; i<n; i++) {
		cout<<endl;
		cout<<"Data ke-"<<(i+1)<<":"<<endl;
		cout<<"Input NIM Mahasiswa  : ";
		cin>>nim[i];
		cout<<"Input Nama Mahasiswa : ";
		cin>>nama[i];
		cout<<"Input Program Studi Mahasiswa : ";
		cin>>prodi[i];
		cout<<"Input Nomor Telepon Mahasiswa : ";
		cin>>noHp[i];
		cout<<endl;
	}
}

void Mahasiswa::proses() {
//Shorting berdasarkan NIM
	U=n-1;
	for(i=0; i<=n-2; i++) {
		Imaks = i;
		for(j=i+1; j<=U; j++) {
			if(nim[j] > nim[Imaks])
				Imaks = j;
		}
		temp = nim[i];
		nim[i] = nim[Imaks];
		nim[Imaks] = temp;
		cout<<endl;
	}
//searching berdasarkan NIM
	cout<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"Input NIM Mahasiswa yang dicari : ";
	cin>>cari;
	cout<<"-----------------------------------"<<endl;

	for(i=0; i<=n; i++) {
		if (nim[i]==cari) {
			ketemu=1;
			cout<<"Nama Mahasiswa     : "<<nama[i]<<endl;
			cout<<"Prodi Mahasiswa    : "<<prodi[i]<<endl;
			cout<<"No. Telp Mahasiswa : "<<noHp[i];
		}
	}
	if (ketemu==0) {
		cout<<"NIM Mahasiswa tidak ditemukan!";
	}
};

void Mahasiswa::output() {
	cout<<endl<<endl;
	cout<<"\nNIM Mahasiswa setelah diurutkan : ";
	for(i=0; i<n; i++) {
		cout<<setw(15)<<nim[i];
	}
};

int main (void) {
	Mahasiswa run;
	run.input();
	run.proses();
	run.output();
}