using namespace std;

class Output {
	public :
	// Untuk menampilkan apa yg dibeli dan berapa harganya //
		void cetak () {
			cout << endl;
			cout<<"======STRUK PEMBELIAN MAKANAN=======\n";
			cout<<"---------JUMLAH PEMBELIAN-----------\n";
			cout<<"  Ayam Geprek  : "<<data_file[0]<<" Porsi"<<endl;
			cout<<"  Ayam Goreng  : "<<data_file[1]<<" Porsi"<<endl;
			cout<<"  Udang Goreng : "<<data_file[2]<<" Porsi"<<endl;
			cout<<"  Cumi Goreng  : "<<data_file[3]<<" Porsi"<<endl;
			cout<<"  Ayam Bakar   : "<<data_file[4]<<" Porsi"<<endl;
			cout<<"  Jarak        : "<<data_file[5]<<" KM"<<endl;
			cout << "" <<endl;
			cout<<" Total Pembelian  : Rp. "<<data_file[6]<<endl;
			cout<<" Diskon Pembelian : Rp. "<<data_file[7]<<endl;
			cout<<" Ongkir           : Rp. "<<data_file[8]<<endl;
			cout<<" Diskon Ongkir    : Rp. "<<data_file[9]<<endl;
			cout<<" Harga Bayar      : Rp. "<<data_file[10]<<endl;
            cout<<"====================================\n";
			// Mengikuti proses yg akan di buat //

		}

		void getData() {
			ambil_data.open("api_data.txt");
			string t;
			while(!ambil_data.eof()){
				ambil_data>>data_file[index];
				index += 1;
			}
			ambil_data.close();
		}
	private :
		ifstream ambil_data;
		string data_file[30];
		int index = 0;

};
