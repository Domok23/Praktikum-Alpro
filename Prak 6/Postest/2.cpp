#include <cstdlib>
#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class array {
		friend ostream& operator<<(ostream&, const array&);
		friend istream& operator>>(istream&, array&);
	public:
		array();
		void cetak();
		void geser_kiri();

	private:
		char a[5];
		int posisi;
};

array::array() {
	for(int i=0; i<5; i++)
		a[i]='O';
}

void array::cetak() {
	for(int i=0; i<5; i++)
		cout<<a[i]<<" ";
}

ostream& operator<<(ostream& out, const array& keluar) {
	for(int i=0; i<5; i++)
		out<<keluar.a[i]<<" ";
	out<<endl;
	return out;
}

istream& operator>>(istream& in, array& masuk) {
	int posisi;
	for (int posisi=1; posisi<=5; posisi++) {
		cout<<"masukkan nilai array posisi ke-"<<posisi<<"= ";

		if(posisi >= 0 && posisi <= 5) {
			in>>masuk.a[posisi-1];
		}
	}
	return in;
}

void array::geser_kiri() {
	int n=5;
	int temp=a[0];
	for(int i=0; i<n; i++)
		a[i]=a[i+1];
	a[n-1]=temp;
}

int main(int argc, char** argv) {
	array X;
	cout<<"Array masih kosong : "<<X;
	cin>>X;

	cout<<endl<<"Isi Array saat ini : "<<X;
	X.geser_kiri();
	cout<<"Isi Array setelah di geser kiri : "<<X;

	system("PAUSE");
	return EXIT_SUCCESS;
}