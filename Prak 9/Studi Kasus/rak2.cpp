#include <iostream>
using namespace std;

class Studi {
	public:
		void input() {
			cout<<"NOMOR BUKU YANG AKAN DIMASUKAN"<<endl;
			for(int i=0; i<24; i++) {
				cout << "Masukkan nomor buku ke " << i+1 << "  = " ;
				cin >> data[i];
			}
			cout << endl;
		}
		void proses() {
			for(x=0; x<23; x++) {
				for(y=x+1; y<24; y++) {
					if(data[x]>data[y]) {
						temp = data[x];
						data[x] = data[y];
						data[y] = temp;
					}
				}
			}

			//konversi jadi array 2 dimensi
			int i = 0;
			while(i<20) {
				for(x=0; x<4; x++) {
					for(y=0; y<6; y++) {
						bil[x][y] = data[i];
						i++;
					}
				}
			}

		}
		void output() {
			cout<<"================================================================="<<endl;
			cout << "\t\tNomor buku setelah diurutkan : "<<endl;
			cout<<"================================================================="<<endl;
			for (int i=0; i<24; i++) {
				cout <<" "<< data[i] << " ";
			}
			cout<<endl;
			cout<<"================================================================="<<endl;
			cout << "\t\tTampilan nomor buku pada rak : " << endl;
			cout<<"================================================================="<<endl;
			for(int i=0; i<4; i++) {
				for (int j=0; j<6; j++) {
					cout <<"\t\t"<< bil[i][j] << " ";
				}
				cout << endl;
			}

		}
	private:
		int data[24];
		int bil[4][6];
		int x,y,temp;
};
int main() {
	Studi a;
	a.input();
	a.proses();
	a.output();
	return 0;
}