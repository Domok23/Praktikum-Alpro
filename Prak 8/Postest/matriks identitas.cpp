#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int i, j;
	int matriks[4][4] = {{1,2,3,6},{4,5,6,8},{7,8,9,10},{11,12,13,14}};

	cout<<"Matriks identitas 4x4"<<endl<<endl;
	for (i=1; i<=4; i++) {
		for (j=1; j<=4; j++) {
			if (i==j) {
				cout<<" "<<"merupakan matriks identitas"<<" , "; //merupakan matriks identitas
			} else {
				cout<<" "<<"bukan matriks identitas"<<" , "; //bukan matriks identitas
			}
		}
		cout<<endl;
	}
	cout<<"\nMerupakan Matriks Bujur Sangkar"<<endl;
	getch();
}