#include <iostream>
#include <conio.h>
using namespace std;

class deret{
	public:
	int proses();
	int masukan();
	private:
	int n;
	float hasil;
};

int deret::masukan(){
	cout<<"Fungsi rekursif untuk menyelesaikan deret dengan rumus 1-(1/2)+(1/3)-(1/4)+...+(1/n)"<<endl<<endl;
	cout<<"Tentukan nilai n : ";
	cin>>n;
	cout<<endl;
}

int deret::proses(){
	hasil=0;
	for(int i=1; i<=n; i++){
		if(i%2==0){
			hasil=hasil-(1.0/i);
			cout<<"-(1/"<<i<<")";
		}else{
			hasil=hasil+(1.0/i);
			cout<<"+(1/"<<i<<")";
		}
	}
	
	cout<<endl<<endl<<"Hasil penjumlahan deret = ";
	cout<<hasil;
}

int main(){
	deret a;
	a.masukan();
	a.proses();
	getch();
	return 0;
}
