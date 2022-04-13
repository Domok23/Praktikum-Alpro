#include<iostream>
using namespace std;

class Tabungan {
public:
	void iteratif();
	int a[12],totp=0,banyakA;
	};

void Tabungan::iteratif(){
	int saldo=0;
  	cout<<"Masukkan jumlah uang saku : Rp.";cin>>saldo;
	cout<<"Masukkan jumlah bulan : ";cin>>banyakA;
 	
 	for(int i=0;i<banyakA;i++){
 		
 		cout<<"Masukkan pengeluaran bulan ke-"<<i+1<<" : Rp.";cin>>a[i];
 		totp = totp + a[i];
	 }
	cout<<"\t		------------------ +"<<endl;
	cout<<"\t	Total Pengeluaran : Rp."<<totp<<endl;
	cout<<"\t		------------------ -"<<endl;
	cout<<"\t	Sisa Uang Saku : Rp."<<saldo-totp;
}
  
int main() {
  Tabungan haha; 
  haha.iteratif();
  return 0;
}
