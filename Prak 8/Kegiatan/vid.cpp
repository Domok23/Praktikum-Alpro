#include <iostream>
using namespace std;

int main() {
	int matriksA[2][3] = {{1,2,3}, {4,5,6}};

	for (int i=0; i<2; i++) {
		for (int j=0; j<3; j++) {
			cout<<"Nilai array pada baris ke-"<<i<<" kolom ke-"<<j<<" : ";
			cout<<matriksA[i][j]<<endl;
		}
	}

	cout<<"\nMatriks A\n";
	for (int i=0; i<2; i++) {
		for (int j=0; j<3; j++) {
			cout<<matriksA[i][j]<<" ";
		}
		cout<<endl;
	}

	int matriksB[5][5];
	int baris, kolom;

	cout <<"\nMasukkan banyak data pada baris: ";
	cin>>baris;
	cout <<"Masukkan banyak data pada kolom: ";
	cin>>kolom;

	for (int i=0; i<baris; i++) {
		for (int j=0; j<kolom; j++) {
			cout<<"Masukkan nilai array pada baris ke-"<<i<<" kolom ke-"<<j<<" : ";
			cin>>matriksB[i][j];
		}
	}

	cout<<"\nMatriks B\n";
	for (int i=0; i<baris; i++) {
		for (int j=0; j<kolom; j++) {
			cout<<matriksB[i][j]<<" ";
		}
		cout<<endl;
	}
}
