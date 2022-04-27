#include <iostream>
#include <string>

using namespace std;

class geser {
		friend istream& operator>>(istream&, geser&);
		friend ostream& operator<<(ostream&, geser&);

	public:
		void geser_kiri();
	private:
		int i;
		char kata[100];
		int banyak;
		int temp;
};

void geser::geser_kiri() {
	temp   = kata[0];

	for(int i=0; i<=banyak-1; i++) {
		if(i<banyak-1) kata[i] = kata[i+1];
		else kata[i] = temp;
	}
}

istream& operator>>(istream& in, geser& masuk) {
	cout << "Masukkan kata : ";
	in >> masuk.kata;
	masuk.banyak=strlen(masuk.kata);
	return in;
}

ostream& operator<<(ostream& out, geser& keluar) {
	cout << "Geser ke kiri" << endl;
	cout << keluar.kata;
	cout << endl;
	return out;
}

int main() {
	geser kata;
	cin >> kata;
	kata.geser_kiri();
	cout << kata;
	cout << endl;
	system("PAUSE");
	return 0;
}