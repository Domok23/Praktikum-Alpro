#include <iostream>
#include <iomanip>
using namespace std;

class arr {
	private:
		int data[6][2]= {{30,200000},{45,60000},{55,120000},{23,400000},{12,3100000},{14,2500000}};
		string nama[6]= {"Samsung Evo","SanDisk 16GB","Logitech M170","WD Green 120GB","Garmin Venu SQ","Epson L3210 AIO"};
		int sub;
		long total;
	public:
		void input() {
			cout<<"\n*)Tabel : "<<endl;
			cout<<"======================================================="<<endl;
			cout<<"|        Nama       |      Stok      |   Harga satuan |"<<endl;
			cout<<"======================================================="<<endl;
			for(int i=0; i<6; i++) {
				cout<<"|   ";
				cout<<setiosflags(ios::left)<<setw(15)<<nama[i]<<" |";
				for(int j=0; j<2; j++) {
					cout<<"      ";
					cout<<setiosflags(ios::left)<<setw(10)<<data[i][j]<<"|";
				}
				cout<<endl;
			}
			cout<<"======================================================="<<endl;
		}
		
		void proses() {
			sub=1;
			for(int i=0; i<6; i++) {
				for(int j=0; j<2; j++) {
					sub*=data[i][j];
				}
				total+=sub;
				sub=1;
			}
			total-=1;
		}
		
		void output() {
			cout<<"\n*)Tabel dengan total : "<<endl;
			cout<<"======================================================="<<endl;
			cout<<"|        Nama       |      Stok      |   Harga satuan |"<<endl;
			cout<<"======================================================="<<endl;
			for(int i=0; i<6; i++) {
				cout<<"|   ";
				cout<<setiosflags(ios::left)<<setw(15)<<nama[i]<<" |";
				for(int j=0; j<2; j++) {
					cout<<"      ";
					cout<<setiosflags(ios::left)<<setw(10)<<data[i][j]<<"|";
				}
				cout<<endl;
			}
			cout<<"-------------------------------------------------------"<<endl;
			cout<<"|                                   Total: "<<total<<"   |"<<endl;
			cout<<"======================================================="<<endl;
		}

};

int main() {
	arr x;
	x.input();
	x.proses();
	x.output();
}