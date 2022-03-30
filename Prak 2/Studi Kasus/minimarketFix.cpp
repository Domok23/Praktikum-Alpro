#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	ulang:
		double brg1,brg2,brg3,brg4,brg5,jmlh,kmbl,byr,tot;
		int pil,bnyk;
		char konfirm;
		
		cout << "=========================================================== " << endl;
		cout << "               | MINIMARKET INDOMERIT | " << endl;
		cout << "               |  JL SETURAN NO. 331  | " << endl;
		cout << "=========================================================== " << endl;
		cout << "" << endl;
		cout << " ----------------------------------------------------------- " << endl;
		cout << "" << endl;
		cout << "  ------ DAFTAR BARANG ------"<<endl;
		cout << " 1. SABUN MANDI   : Rp 20.000"<<endl;
		cout << " 2. SAMPO BOTOL   : Rp 18.000"<<endl;
		cout << " 3. MINYAK GORENG : Rp 50.000"<<endl;
		cout << " 4. BERAS KARUNG  : Rp 90.000"<<endl;
		cout << " 5. ODOL GIGI     : Rp 15.000"<<endl;
		cout << "" << endl;
		cout << " ----------------------------------------------------------- " << endl;
		cout << " Masukan yang ingin anda beli : "; cin >> pil;
		
		if(pil==1){
			cout << " Anda Membeli SABUN MANDI dengan harga Rp. 20.000 " << endl;
			brg1 = 20000;
			cout << " Masukan jumlah yang anda inginkan: "; 
			cin >> bnyk;
			jmlh = brg1*bnyk;
			goto hasil;
		} else if (pil==2){
			cout << " Anda Membeli SAMPO BOTOL dengan harga Rp. 18.000 " << endl;
			brg2 = 18000;
			cout << " Masukan jumlah yang anda inginkan: "; 
			cin >> bnyk;
			jmlh = brg2*bnyk;
			goto hasil;
		} else if (pil==3){
			cout << " Anda Membeli MINYAK GORENG dengan harga Rp. 50.000 " << endl;
			brg3 = 50000;
			cout << " Masukan jumlah yang anda inginkan: "; 
			cin >> bnyk;
			jmlh = brg3*bnyk;
			goto hasil;
		} else if (pil==4){
			cout << " Anda Membeli BERAS KARUNG dengan harga Rp. 90.000 " << endl;
			brg4 = 90000;
			cout << " Masukan jumlah yang anda inginkan: "; 
			cin >> bnyk;
			jmlh = brg4*bnyk;
			goto hasil;
		} else if (pil==5){
			cout << " Anda Membeli ODOL GIGI dengan harga Rp. 15.000 " << endl;
			brg5 = 15000;
			cout << " Masukan jumlah yang anda inginkan: "; 
			cin >> bnyk;
			jmlh = brg5*bnyk;
			goto hasil;
		} else cout<<" Maaf yang Anda masukan tidak terdaftar di menu"<< endl;
		
		cout << "" << endl;
		cout << " apakah anda ingin mengulangi nya lagi? [y/t]";
		scanf("%s", &konfirm);
		if(konfirm == 'y' || konfirm == 'Y'){
			system("CLS"); 
			goto ulang; 
		} else
		if(konfirm == 't' || konfirm == 'T'){
			goto selesai;
		}
	
	hasil:
		cout << "\n      ============================================================" << endl;	
		cout << "      JUMLAH  : Rp." << jmlh;
		tot=jmlh;
		cout << "" << endl;
		cout << "      TOTAL   : Rp." << tot;
		cout << "" << endl;
		cout << "      BAYAR   : Rp."; cin >> byr;
		
		if(byr >= tot){
			kmbl = byr - tot;
			cout << "" << endl;
			cout << "      KEMBALIAN : Rp." << kmbl << endl ;
			cout << "      ------------------------------------------------------------" << endl;
			cout << "      TERIMA KASIH TELAH BERBELANJA DITEMPAT KAMI" << endl;
			cout << "      ============================================================" << endl;
		} else if(byr < tot){
			cout << "" << endl;
			cout << "      ---Maaf Uang Anda Kurang, Mohon Tambahkan Rp." << tot - byr <<" lagi!---" << endl;
			cout << "      ============================================================" << endl;
		}
			
		cout << "" << endl;
		cout << " apakah anda ingin mengulangi nya lagi? [y/t]";
		scanf("%s", &konfirm);
		if(konfirm == 'y' || konfirm == 'Y'){
			system("CLS"); 
			goto ulang; 
		} else
		if(konfirm == 't' || konfirm == 'T'){
			goto selesai;
		}
	
	selesai:
		cout << "" << endl;
		cout << " TERIMA KASIH ATAS KUNJUNGAN ANDA" << endl;
		cout << " BARANG YANG SUDAH DIBELI TIDAK BOLEH DI KEMBALIKAN " << endl;
		cout << "======================================================= " << endl;
	return 0;
}
