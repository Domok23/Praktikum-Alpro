#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

struct Mahasiswa {
	string matkul;
	string nim;
	string nama;
	float nilai; // alpro
	float nilaiB; // matdis
};

// algoritma selection sort
// secara ascending
void pengurutan(struct Mahasiswa arr[], int n) {
	int i, j;
	struct Mahasiswa key;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j].nim > key.nim) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void hasilCari(Mahasiswa hasil) {
	string kelas = "A";
	cout << "\nHasil Pencarian Data Mahasiswa:\n" << endl;
	cout << " Ditemukan: " << endl;
	cout << "\tNama\t: " << hasil.nama << " " << endl;
	cout << "\tkelas\t: " << kelas <<  endl;
	cout << "\tNIM\t: " << hasil.nim << " " << endl;
	cout << "\t-  Nilai Alpro\t: " << hasil.nilai << " " << endl;
	cout << "\t-  Nilai Matdis\t: " << hasil.nilaiB << " " << endl;
	cout << endl;
}

//searching berdasarkan nama
void cariData(Mahasiswa array[], int n) {
	string nama;
	cout << "Masukkan Nama : ";
	cin >> nama;
	for (int i = 0; i < n; i++) {
		if (array[i].nama == nama) {
			hasilCari(array[i]);
		}
	}
}

int main() {
	string kelas;
	int i, n = 0;
	
	cout << "Masukkan Banyak Data: ";
	cin >> n;
	cout << endl;
	cout << "Masukkan Kelas: ";
	cin >> kelas;
	cout << endl;
	
	Mahasiswa* mhs = new Mahasiswa[n];
	cout << endl;
	for (i = 0; i< n; i++) {
		cout << "Masukkan data mahasiswa ke-" << i + 1 << endl;
		cout << "Nama\t: ";
		cin >> mhs[i].nama;
		cout << "NIM\t: ";
		cin >> mhs[i].nim;
		cout << "Nilai Alpro\t: ";
		cin >> mhs[i].nilai;
		cout << "Nilai Matdis\t: ";
		cin >> mhs[i].nilaiB;
		cout << endl;
	}

	pengurutan(mhs, n);

	cout << "\nHasil Pengurutan data Mahasiswa";
	cout << endl;
	cout << "Kelas\t: " << kelas << endl;
	cout << "Mata Kuliah\t: Algoritma Pemrograman" << endl;
	cout<<"======================================================="<<endl;
	cout<<"|	  NIM    	|   NAMA  	|   NILAI	  "<<endl;
	cout<<"======================================================="<<endl;
	for (i = 0; i < n; i++) {
		cout<<"\t"<<setiosflags(ios::left)<<setw(15)<<mhs[i].nim<<"	";
		cout<<setiosflags(ios::left)<<setw(17)<<mhs[i].nama<<"  ";
		cout<<setiosflags(ios::left)<<setw(17)<<mhs[i].nilai<<"	 "<<endl;
	}
	cout<<"======================================================"<<endl;

	cout << endl;
	cout << "Kelas\t: "<< kelas << endl;
	cout << "Mata Kuliah\t: Matematika Diskrit" << endl;
	cout<<"======================================================="<<endl;
	cout<<"|	  NIM    	|   NAMA  	|   NILAI	  "<<endl;
	cout<<"======================================================="<<endl;
	for (i = 0; i < n; i++) {
		cout<<"\t"<<setiosflags(ios::left)<<setw(15)<<mhs[i].nim<<"	";
		cout<<setiosflags(ios::left)<<setw(17)<<mhs[i].nama<<"  ";
		cout<<setiosflags(ios::left)<<setw(17)<<mhs[i].nilaiB<<"	 "<<endl;
	}
	cout<<"======================================================"<<endl;

	cout << "\nCari data Mahasiswa" << endl;
	cariData(mhs, n);

	return 0;
}




