#include <iostream>
using namespace std;

class studiKasus {
	private:
		int *nim;
		int nimMhs[10];
		string *nama;
		string namaMhs[10];
	public:
		void input() {
			cout<<"======================================="<<endl;
			cout<<"        DAFTAR FINALIS FARMATIKA       "<<endl;
			cout<<"=======================================\n"<<endl;;
			for (int i=0; i<5; i++) {
				cout << "Data ke-"<<i+1;
				cout<<endl;
				cout << "Nama Peserta : ";
				cin >> namaMhs[i];
				cout << "NIM Peserta  : ";
				cin >> nimMhs[i];
				cout<<endl;
			}
			cout<<endl;
		}

		void proses() {
			nim = new int[5];
			nama = new string[5];
			for(int i=0; i<5; i++) {
				*nama = namaMhs[i];
				nama+=1;
				*nim = nimMhs[i];
				nim += 1;
			}
		}

		void output() {
			nim -= 5 ;
			nama -= 5;
			cout << "================================="<<endl;
			cout<<"|\tDATA MAHASISWA  \t|"<<endl;
			cout << "================================="<<endl;
			for (int i=0; i<5; i++) {
				cout << "\nNama Peserta ke-" << i+1 << " : ";
				cout << *nama ;
				nama += 1;
				cout << "\nNIM               : " ;
				cout << *nim ;
				nim += 1;
				cout<<endl;
			}
			cout<<endl;
		}
};

int main() {
	studiKasus x;
	x.input();
	x.proses();
	x.output();
}