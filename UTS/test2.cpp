#include <iostream>
#include <fstream>
using namespace std;

class olshop {
	public:
		void input();
		void proses();
		void output();
	private:
		char tambah;
		string user, pass, nama_barang[100], alamat, lokasi, proteksi;
		int saldo=500000, i, pil, jumlah_barang[100], harga_barang, exp, ongkir;
		float total_hrga, voucher=10000, total2, sisa_saldo, total_ongkir, total_ongkir2, bayar;
};

void olshop::input() {
	cout << "------------------------------------------------------\n";
	cout << "\tSelamat Datang Di Shapee \n";
	cout << "------------------------------------------------------\n";
	cout << "Masukkan Username : ";
	cin >> user;
	cout << "Masukkan Password : ";
	cin >> pass;
	if (user =="wahyu" && pass =="1234") {
		cout << "--------------------\n";
		cout << "Anda Berhasil Login" <<endl;
		cout << "--------------------\n\n";
		cout<<"Saldo ShopeePay Anda: Rp."<<saldo;
		cout<<"\n-------------------------------\n";
		cout<<"SoftCase XR Shop Official \n";
		cout<<"-------------------------------\n";
		cout<<"-------------------------------\n";
		cout<<"Daftar Produk\n";
		cout<<"1. Soft Case XR (Random)\n";
		cout<<"   Rp. 15.000\n";
		cout<<"---------------------------\n";
		cout<<"2. Soft Case XR (Merah)\n";
		cout<<"   Rp. 19.000\n";
		cout<<"---------------------------\n";
		cout<<"3. Soft Case XR (Gold)\n";
		cout<<"   Rp. 39.000\n";
		i=0;
		do {
			cout<<"\nPilih Barang/Warna: ";
			cin>>pil;
			if(pil==1) {
				nama_barang[i]="Soft Case XR (Random)";
				cout<<"Harga Soft Case XR (Random): Rp. 15.000\n";
				cout<<"Masukkan Jumlah Barang di Keranjang: ";
				cin>>jumlah_barang[i];
				harga_barang=jumlah_barang[i]*15000;
				total_hrga+=harga_barang;
			} else if(pil==2) {
				nama_barang[i]="Soft Case XR (Merah)";
				cout<<"Harga Soft Case XR (Merah): Rp. 19.000\n";
				cout<<"Masukkan Jumlah Barang di Keranjang: ";
				cin>>jumlah_barang[i];
				harga_barang=jumlah_barang[i]*19000;
				total_hrga+=harga_barang;
			} else if(pil==3) {
				nama_barang[i]="Soft Case XR (Gold)";
				cout<<"Harga Soft Case XR (Gold): Rp. 39.000\n";
				cout<<"Masukkan Jumlah Barang di Keranjang: ";
				cin>>jumlah_barang[i];
				harga_barang=jumlah_barang[i]*39000;
				total_hrga+=harga_barang;
			}
			harga_barang=0;
			cout<<"\nIngin tambah barang lagi?[y/t]: ";
			cin>>tambah;
			i++;
		} while(tambah=='y');

		cout<<endl;
		cout<<"TOTAL HARGA: "<<total_hrga<<endl;
		cout<<"\n--------------------------\n";
		cout<<"Masukkan Alamat Lengkap Anda: ";
		cin>>alamat;
		cout<<"Masukkan Lokasi Anda (Pulau): ";
		cin>>lokasi;
		cout<<"--------------------------\n";
		cout<<"Pilih Jenis Ekspedisi Pengiriman :\n";
		cout<<"1. JNE\n";
		cout<<"2. J&T\n";
		cout<<"3. Si Cepat\n";
		cout<<"Masukkan Pilihan Ekspedisi Pengiriman : ";
		cin>>exp;
		switch (exp) {
			case 1:
				if(lokasi=="jawa") {
					ongkir=20000;
					cout<<"Ongkir: Rp 20.000\n";
				} else if(lokasi!="jawa") {
					ongkir=50000;
					cout<<"Ongkir: Rp 50.000\n";
				}
				break;
			case 2:
				if(lokasi=="jawa") {
					ongkir=21000;
					cout<<"Ongkir: Rp 21.000\n";
				} else if(lokasi!="jawa") {
					ongkir=38000;
					cout<<"Ongkir: Rp 38.000\n";
				}
				break;
			case 3:
				if(lokasi=="jawa") {
					ongkir=22000;
					cout<<"Ongkir: Rp 22.000\n";
				} else if(lokasi!="jawa") {
					ongkir=45000;
					cout<<"Ongkir: Rp 45.000\n";
				}
				break;
			default:
				cout << "Pilihan Tidak Tersedia";
		}
	} else {
		cout << "------------------------------\n";
		cout << "Maaf ID / PASSWORD Anda Salah!" <<endl;
		cout << "------------------------------\n\n";
		exit(1);
	}
	system("CLS");
};

void olshop::proses() {
	cout<<"-------------------------\n";
	cout<<"Menggunakan voucher diskon toko = "<< voucher;
	cout<<"\n-------------------------\n";
	total2=total_hrga-voucher;
	cout<<"-------------------------\n";
	cout<<"Penambahan Proteksi?[y/t]: ";
	cin>>proteksi;
	if(proteksi=="y") {
		total2+=5000;
		cout<<"Tambahan Proteksi Barang sebesar Rp.5000\n";
	}

	cout<<"-------------------------\n";
	cout<<"Voucher Gratis Ongkir (Min. Belanja Rp 30.000)\n";
	if (total2>=30000) {
		total_ongkir=ongkir-20000;
		cout<<"Voucher berhasil digunakan\n";
	} else if (total2<=30000) {
		total_ongkir=ongkir;
		cout<<"Minimal Belanja Belum Mencukupi\n";
	}
	total_ongkir2 = total_ongkir;
	bayar=total2+total_ongkir2;
	cout<<"---------------------------\n";
	cout<<"TOTAL PEMBAYARAN: "<<bayar<<endl;
	cout<<"---------------------------\n";

	sisa_saldo=saldo-bayar;
	cout<<"Sisa saldo shopeepay anda : "<<sisa_saldo<<endl;
	cout<<"-------------------------\n";
	i=0;
};

void olshop::output() {

	ofstream myfile("struk.txt");

	if(!myfile.fail()) {
		myfile<<"------------------------------------------------------"<<endl;
		myfile<<"\t            Struk Belanja"<<endl;
		myfile<<"------------------------------------------------------"<<endl;
		myfile<<"Pengirim        : SoftCase XR Shop Official"<<endl;
		myfile<<"Nama Penerima   : "<<user<<endl;
		myfile<<"Alamat Penerima : "<<alamat<<endl;
		myfile<<"Barang yang Dipesan \n";
		myfile<<nama_barang[i]  <<"\t Jumlah : "<<jumlah_barang[i]<<endl;
		myfile<<nama_barang[i+1]<<"\t Jumlah : "<<jumlah_barang[i+1]<<endl;
		myfile<<nama_barang[i+2]<<"\t Jumlah : "<<jumlah_barang[i+2]<<endl;
		myfile<<"------------------------------------------------------"<<endl;
		myfile<<"Ongkir           : "<<total_ongkir2<<endl;
		myfile<<"Total Pembayaran : "<<bayar<<endl;
		myfile<<"Keterangan       : Lunas, Pembayaran melalui Shopeepay"<<endl;
		myfile<<"------------------------------------------------------"<<endl;
		cout<<"Text berhasil ditulis ke dalam File struk.txt"<<endl;
	} else {
		cout<<"File tidak ditemukan"<<endl;
	}
};

int main (void) {
	olshop x;
	x.input();
	x.proses();
	x.output();
};