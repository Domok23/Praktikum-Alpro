#include<iostream>
#include<iomanip>
using namespace std;
class mahasiswa{
	public:
		void input(){
			cout<<"========================================="<<endl;
			cout<<"            RESPONSI PRAK ALPRO          "<<endl;
			cout<<"========================================="<<endl;
			cout<<"Masukkan banyaknya data : ";
			cin>>x;
			cout<<"-----------------------------------------"<<endl;
			
			for(int i=0; i<x; i++){
                cout<<"Masukkan Kelas Mahasiswa  : ";
                cin>>kelas[i];
                cout<<"Masukkan Matkul Mahasiswa  : ";
                cin>>matkul[i];
				cout<<"Masukkan Nama Mahasiswa   : ";
				cin.ignore();
				getline(cin,nama[i]);
				cout<<"Masukkan NIM Mahasiswa    : ";
				cin>>nim[i];
				cout<<"Masukkan Nilai Mahasiswa  : ";
				cin>>nilai[i];
			}
		}
		void proses (){
			//sorting
			for(int i=0; i<x; i++){
				for(int j = 0; j<x-1; j++){
					if(nim[j] < nim[j+1]){
						tkrnilai = nilai[j];
						nilai[j] = nilai[j+1];
						nilai[j+1] = tkrnilai;
						
						tkrnama = nama[j];
						nama[j] = nama[j+1];
						nama[j+1] = tkrnama;
							
						tkrnim = nim [j];
						nim[j] = nim[j+1];
						nim[j+1] = tkrnim;
					}
				}
			}
		}
		void output(){
			cout<<"=========================================================================="<<endl;
			cout<<"      KELAS       |	     NIM    	|      NAMA  	 |      NILAI		 "<<endl;
			cout<<"=========================================================================="<<endl;
			for(int i=0; i<x; i++){
                cout<<setiosflags(ios::left)<<setw(20)<<kelas[i]<<" ";
                cout<<setiosflags(ios::left)<<setw(20)<<matkul[i]<<" ";
				cout<<setiosflags(ios::left)<<setw(20)<<nim[i]<<"	";
				cout<<setiosflags(ios::left)<<setw(20)<<nama[i]<<"  ";
				cout<<setiosflags(ios::left)<<setw(20)<<nilai[i]<<"	 "<<endl;
				cout<<"==========================================================================="<<endl;
			}
			cout<<"Masukkan Nama Mahasiswa yang ingin dicari  : ";
			cin>>search;
			
			//searching
			int k=0;
			for (int i=0; i<x; i++){
				if(nama[i] == search){
                cout<<"=========================================================================="<<endl;
			    cout<<"      KELAS       |	     NIM    	|      NAMA  	 |      NILAI		 "<<endl;
			    cout<<"=========================================================================="<<endl;
                    cout<<setiosflags(ios::left)<<setw(20)<<kelas[i]<<" ";
                    cout<<setiosflags(ios::left)<<setw(20)<<matkul[i]<<" ";
					cout<<setiosflags(ios::left)<<setw(20)<<nim[i]<<" ";
					cout<<setiosflags(ios::left)<<setw(20)<<nama[i]<<"	 ";
					cout<<setiosflags(ios::left)<<setw(20)<<nilai[i]<<"	 "<<endl;
					k++;
					break;
					cout<<"====================================================================="<<endl;
				}
			}
			if(k == 0){
				cout<<"DATA TIDAK TERSEDIA ";
			}
		}
		
		private:
			int x, tkrnim, tkrnilai;
			int nilai[50], nim[50];
			string nama[50];
			string matkul[50];
			string tkrnama;
			string kelas, search;
}; 
int main(){
    mahasiswa x;
	x.input();
	x.proses();
	x.output();
}