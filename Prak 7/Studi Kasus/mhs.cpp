#include <iostream>
#include <string.h>
using namespace std;

class Mahasiswa {
	public:
		void data();
};

typedef struct {
	int nim, no_telp;
	char nama[10];
	string prodi;
}
mhs;
mhs mahasiswa[6];
mhs temp;
int n, i, b, j, cari, ada;

void Mahasiswa::data() {

	cout<<"*********************************************************************"<<endl;
	cout<<"                       MAHASISWA UAD                                 "<<endl;
	cout<<"*********************************************************************"<<endl<<endl;

	cout<<"Masukan banyak Mahasiswa = ";
	cin>>n;

	for(i=0; i<n; i++) {
		cout<<endl;
		cout<<"Mahasiswa ke-"<<(i+1)<<":"<<endl;
		cout<<"Masukan NIM Mahasiswa     : ";
		cin>>mahasiswa[i].nim;
		cout<<"Masukan Nama Mahasiswa    : ";
		cin>>(mahasiswa[i].nama);
		cout<<"Masukan Prodi Mahasiswa   : ";
		cin>>mahasiswa[i].prodi;
		cout<<"Masukan No Telp Mahasiswa : ";
		cin>>mahasiswa[i].no_telp;
	}
	cout<<endl;
	cout<<"Data Mahasiswa"<<endl<<endl;
	cout<<"*****************************************************************"<<endl;
	cout<<"|   NIM Mahasiswa  |  Nama Mahasiswa  | Program Studi | No Telp | "<<endl;
	cout<<"***************************************************************** "<<endl;

	for(i=0; i<n; i++) {
		cout<<"|      "<<mahasiswa[i].nim<<"\t\t"<<mahasiswa[i].nama<<"\t\t"<<mahasiswa[i].prodi<<"\t\t"<<mahasiswa[i].no_telp<<endl;
	}
	cout<<endl;
	cout<<"***************************************************************** "<<endl;

	for(i=0; i<n; i++) {
		for(j=0; j<n-1; j++) {
			if(mahasiswa[j].nim > mahasiswa[j+1].nim) {
				temp.nim=mahasiswa[j].nim;
				mahasiswa[j].nim=mahasiswa[j+1].nim;
				mahasiswa[j+1].nim=temp.nim;

				strcpy(temp.nama,mahasiswa[j].nama);
				strcpy(mahasiswa[j].nama,mahasiswa[j+1].nama);
				strcpy(mahasiswa[j+1].nama,temp.nama);
				
				temp.prodi,mahasiswa[j].prodi;
				mahasiswa[j].prodi,mahasiswa[j+1].prodi;
				mahasiswa[j+1].prodi,temp.prodi;

				temp.no_telp=mahasiswa[j].no_telp;
				mahasiswa[j].no_telp=mahasiswa[j+1].no_telp;
				mahasiswa[j+1].no_telp=temp.no_telp;
			}
		}
	}
	cout<<endl;
	cout<<endl;

	cout<<"Setelah data diurutkan berdasarkan NIM terkecil : "<<endl;
	cout<<"****************************************************** "<<endl;
	cout<<"|   NIM Mahasiswa  |  Nama Mahasiswa  |    No Telp   | "<<endl;
	cout<<"****************************************************** "<<endl;
	for(j=0; j<n; j++) {
		cout<<"|       "<<mahasiswa[j].nim<<"\t\t"<<mahasiswa[j].nama<<"\t\t"<<mahasiswa[j].no_telp<<endl;
	}

	cout<<"******************************************************* "<<endl;
	cout<<endl;
	cout<<"Masukan NIM Mahasiswa untuk Mencari data : ";
	cin>>cari;
	ada = 0;
	for(j=0; j<n; j++) {
		if(mahasiswa[j].nim==cari) {
			ada=1;

			cout<<endl;
			cout<<"***************************************************************"<<endl;
			cout<<"|     NIM Mahasiswa    |    Nama Mahasiswa    |    No Telp    |    "<<endl;
			cout<<"***************************************************************"<<endl;
			cout<<"|         "<<mahasiswa[j].nim<<"\t\t  "<<mahasiswa[j].nama<<"\t\t     "<<mahasiswa[j].no_telp<<"\t\t"<<endl;
		}
	}
	cout<<"***********************************************************************"<<endl;
	if (ada == 0) {
		cout<<"Data Tidak ditemukan"<<endl;
	}
}
int main() {
	Mahasiswa uad;
	uad.data();
	return 0;
}