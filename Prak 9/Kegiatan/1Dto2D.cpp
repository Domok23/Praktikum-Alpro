#include <iostream>
using namespace std;
int main() {
	int n, brs, klm;
	int data[20];
	int output[40][40];
	int d=0;
	cout << "Masukkan banyak bilangan : ";
	cin >> n;
	//proses memasukkan bilangan
	for (int i=0; i<n; i++) {
		cout << "Data ke-"<<i<<" = ";
		cin >> data[i];
	}
	cout<<endl;
	//proses cetak array 1 dimensi
	for (int j=0; j<n; j++) {
		cout <<" "<< data[j] << " ";
	}
	cout << endl << "\n";
	cout << "Masukkan banyak baris : ";
	cin >> brs;
	cout << "Masukkan banyak kolom : ";
	cin >> klm;
	//proses perubahan array 1d ke array 2d
	for (int k=0; k<brs; k++) {
		for (int l=0; l<klm; l++) {
			output[k][l]=data[d];
			d++;
		}
	}
	//proses menampilkan bentuk array 2d
	cout << "\nBentuk Array 2 Dimensi"<<endl;
	for (int k=0; k<brs; k++) {
		for (int l=0; l<klm; l++) {
			cout << " " << output[k][l]<<" ";
		}
		cout << endl;
	}
	return 0;
}
