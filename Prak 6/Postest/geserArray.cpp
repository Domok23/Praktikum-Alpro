#include <iostream>
using namespace std;
class geserkk {
		friend istream&operator>>(istream&,geserkk&);
		friend ostream&operator<<(ostream&,geserkk&);
	public:
		geserkk();
		void kiri();
		void kanan();
	private:
		int a[5];
		int temp;
};
geserkk::geserkk() {}

istream&operator>>(istream&in,geserkk&masuk) {
	cout<<"Masukkan Array ke 1 : ";
	in>>masuk.a[0];
	cout<<"Masukkan Array ke 2 : ";
	in>>masuk.a[1];
	cout<<"Masukkan Array ke 3 : ";
	in>>masuk.a[2];
	cout<<"Masukkan Array ke 4 : ";
	in>>masuk.a[3];
	cout<<"Masukkan Array ke 5 : ";
	in>>masuk.a[4];
	return in;
}

void geserkk::kiri() {
	temp=a[0];
	a[0]=a[1];
	a[1]=a[2];
	a[2]=a[3];
	a[3]=a[4];
	a[4]=temp;
}

void geserkk::kanan() {
	temp=a[4];
	a[4]=a[3];
	a[3]=a[2];
	a[2]=a[1];
	a[1]=a[0];
	a[0]=temp;
}

ostream&operator<<(ostream&out,geserkk&keluar) {
	out<<"Hasil setelah Digeser = "<<keluar.a[0]<<keluar.a[1]<<keluar.a[2]<<keluar.a[3]<<keluar.a[4]<<endl;
	return out;
}

main() {
	int pilih;
	geserkk geser;
	cout<<"Pilih : "<<endl;
	cout<<"ketik 1 untuk Kiri"<<endl;
	cout<<"ketik 2 untuk Kanan"<<endl;
	cin>>pilih;
	if(pilih==1) {
		cin>>geser;
		geser.kiri();
		cout<<geser;
	} else {
		cin>>geser;
		geser.kanan();
		cout<<geser;
	}
}