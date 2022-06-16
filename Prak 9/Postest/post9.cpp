#include<iostream>
using namespace std;
int main() {
	int n,baris,kolom,temp;
	int data[64];
	int data2[32][32];
	int d=0;

	cout<<"Masukkan banyaknya data : ";
	cin>>n;
	cout<<endl;
	for(int i=0; i<n; i++) {
		cout<<"Masukkan nilai data ke-"<<i+1<<" : ";
		cin>>data[i];
	}
	cout<<"\nData SEBELUM diurutkan dalam array 1 dimensi\n";
	for(int j=0; j<n; j++) {
		cout<<" "<<data[j]<<" ";
	}
	cout<<endl;
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(data[i]>data[j]) {
				temp=data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}
	}
	cout<<endl;
	cout<<"Data SETELAH diurutkan dalam array 1 dimensi\n";
	for(int i=0; i<n; i++) {
		cout<<" "<<data[i]<<" ";
	}
	cout<<endl<<"\n";
	cout<<"Masukkan banyak baris : ";
	cin>>baris;
	cout<<"Masukkan banyak kolom : ";
	cin>>kolom;
	for(int k=0; k<baris; k++) {
		for(int l=0; l<kolom; l++) {
			data2[k][l]=data[d];
			d++;
		}
	}
	cout<<endl;
	cout<<"Data setelah dikonversi menjadi array 2 dimensi"<<endl;
	for(int k=0; k<baris; k++) {
		for(int l=0; l<kolom; l++) {
			cout <<"\t"<<data2[k][l] << " ";
		}
		cout<<endl;
	}
	return 0;
}
