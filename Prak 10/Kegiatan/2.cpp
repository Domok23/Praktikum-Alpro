#include <iostream>
using namespace std;

int main() {
	int A = 5;
	int B = 3;
	cout << "Nilai A : " << A << endl;
	cout << "Nilai B : " << B << endl;
	int *Pa = &A;
	cout << "\nNilai yang ditunjuk pointer Pa (var. A) : " << *Pa << endl;
	int *Pb = &B;
	cout << "Nilai yang ditunjuk pointer Pb (var. B) : " << *Pb << endl;
	Pa = Pb; // ekivalen dengan Pa = &B
	cout << "\nSetelah tugas Pa diubah : \n";
	cout << "Nilai yang ditunjuk pointer Pb (var. B) : " << *Pb << endl;
	cout << "Nilai yang ditunjuk pointer Pa (var. B) : " << *Pa << endl;
}
