#include <iostream>
#include <iomanip>
using namespace std;

class proses{
public: 
    int rekursif(int x);
    void hitung(); 
   
private:
  int sks,total,diskon,total_biaya1,total_biaya2,total_diskon,pembayaran;
  int jml_matkul;
  int biaya = 120000;
  int hasil=0;
  string matkul;
  char nim[10],nama[50];
};  

void proses::hitung(){
  
  proses p;
  cout << "Masukkan Nama                : ";
  cin >> nama;
  cout << "Masukkan NIM                  : ";
  cin >> nim;
  cout << "Masukkan banyak Mata Kuliah   : ";
  cin>>jml_matkul;
  cout << endl;
  cout<<"---------------------------------------"<<endl;
  hasil=p.rekursif(jml_matkul);
  total = hasil * biaya;
  diskon = total * 10/100;
  total_biaya1 = total - diskon;
  total_diskon = total_biaya1 * 5/100;
  total_biaya2 = total_biaya1 - total_diskon;
  cout <<"\n\n---------------------------------";
  cout << "\nNama Mahasiswa                   : " << nama;
  cout << "\nNIM Mahasiswa                    : " << nim;
  cout << "\nJumlah Mata Kuliah               : " << jml_matkul;
  cout << "\nJumlah SKS                       : " << hasil;
  cout << "\nBiaya                            : " << total << endl ;
  cout << "Total biaya setelah di diskon    : " << total_biaya2;
}
int proses::rekursif(int x){
  if (x==0){
    cout << "Jumlah SKS   		: " << hasil;
    return hasil;
  }
  else{
    cout << "Masukkan Mata Kuliah 	: ";
    cin >> matkul;
    cout << "Masukkan SKS 		: ";
    cin >> sks;
    cout<<"---------------------------------------"<<endl;
    hasil=hasil+sks;
    return rekursif(x-1);
  }
}

int main() {
  int x;
  proses p;
  cout<<"======================================="<<endl;
	cout<<"           Penginputan SKS "<<endl;
	cout<<"======================================="<<endl;
  p.hitung();
  return 0;
}
