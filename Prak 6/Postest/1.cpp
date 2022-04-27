#include <cstdlib>
#include <iostream>
#define maks5

using namespace std;

class Array1D {
		friend ostream& operator<<(ostream&, const Array1D&);
		friend istream& operator>>(istream&, Array1D&);
	public:
		Array1D();
		void cetak();
		void geser_kiri();
	private:
		char A[5];
		int posisi;
};

Array1D::Array1D() {
	for(int i=0; i<5; i++)
		A[i]='O';
}

void Array1D::cetak() {
	for(int i=0; i<5; i++)
		cout<<A[i]<<" ";
}

ostream& operator<<(ostream& out, const Array1D& x) {
	for(int i=0; i<5; i++)
		out<<x.A[i]<<" ";
	out<<endl;
	return out;
}

istream& operator>>(istream& in, Array1D& x) {
	int posisi;
	for (int posisi=1; posisi<=5; posisi++) {
		cout<<"masukkan nilai array posisi ke- : "<<posisi;
		if(posisi >= 0 && posisi <= 5) {
			cout<<"\nmasukkan elemen arraynya : ";
			in>>x.A[posisi-1];
		}
	}
	return in;
}


void Array1D::geser_kiri() {
	int n=5;
	int temp=A[0];
	for(int i=0; i<n; i++)
		A[i]=A[i+1];
	A[n-1]=temp;
}

int main(int argc, char *argv[]) {
	Array1D x;
	cout<<"Array masih kosong : "<<x;
	cin>>x;

	cout<<"Isi Array saat ini : "<<x;
	x.geser_kiri();
	cout<<"Isi Array setelah di geser kiri : "<<x;

	system("PAUSE");
	return EXIT_SUCCESS;
}
