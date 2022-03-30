#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	//Inisialisasi atau deklarasi variabel
	int jum_beli, bayar, diskon, jumlah[50], harga[50], sub_tot[50];
	string nama_barang[50];
	float tot;
	
	cout<<"MINIMARKET INDOMERIT"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	cout<<"Masukan Jumlah Barang : ";
	cin>>jum_beli; //Pengguna memasukan jumlah menu yang beli
	
	for (int i=0; i<jum_beli;i++){
		cout<<endl;
		cout<<"Masukan Barang Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Nama Barang   : ";
		cin>>nama_barang[i]; //Pengguna input nama menu disimpan pada array nama_menu
		
		cout<<"Jumlah        : ";
		cin>>jumlah[i]; //Pengguna input jumlah disimpan pada array jumlah
		
		cout<<"Harga         : ";
		cin>>harga[i]; //Pengguna input harga disimpan pada array harga
		
		sub_tot[i]=jumlah[i]*harga[i]; // Menjumlahkan Harga sub total menu
		tot+=sub_tot[i]; //Menjumlahkan seluruh sub total menu
	}
	
	cout<<endl;
	cout<<"STRUK BELANJA MINIMARKET INDOMERIT"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"No    Barang       Jumlah      Harga      sub Total"<<endl;
	for (int i=0;i<jum_beli;i++){
		cout<<i+1<<setw(12)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl; //Menampilkan semua nilai array
	}
	cout<<"---------------------------------------------------------"<<endl;
	
	//Menampilkan Keterangan
	cout<<"Jumlah Bayar : Rp."<<tot<<endl;//Menampilkan jumlah bayar (belum termasuk diskon)
	cout<<"Total Bayar  : Rp."<<tot<<endl;//Menampilkan total harga yang harus dibayar
	
	cout<<"Bayar        : Rp.";
	cin>>bayar; // Input dari user untuk jumlah yang dibayar
	if (bayar < tot){
		cout<<"---------------------------------------------------------"<<endl;
		cout<<"Maaf Uang Anda Kurang!"<<endl;
		cout<<"Mohon Tambah Rp." <<tot-bayar<<" lagi!"<<endl;
	}else{
		cout<<"---------------------------------------------------------"<<endl;
		cout<<"Kembalian    : Rp."<<bayar-tot<<endl; // Menampilkan uang kembali
		cout<<"Terimakasih Atas Kunjungan Anda";
	}
	
}
