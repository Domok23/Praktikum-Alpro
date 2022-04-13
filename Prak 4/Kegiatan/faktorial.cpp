#include <iostream>
#include <conio.h>
 
using namespace std;
 
class Operator{
    friend ostream& operator<<(ostream&, Operator&);
    friend istream& operator>>(istream&, Operator&);
    public:
        void iteratif(int n);
        int rekursif(int n,int a);
    private:
        int g;
        int h;
};

void Operator::iteratif (int n){
    int fak;
    fak = 1;
    while (!(n<=0)){
        cout << n <<" ";
        fak = fak * n;
        n = n-1;
    }
    cout << "\n\nIteratif -> Hasil perkalian semua nilai dari n! = "<< fak << endl<<endl;
};
 
int Operator::rekursif (int n,int a){
    if (n==0){
        cout << "\n\nRekursif -> Hasil perkalian semua nilai dari n! = "<< a << endl;   
    }
    else{
        cout << n << " ";
        return rekursif(n-1,n*a);
    }
};
 
istream& operator>>(istream& in, Operator& input){
    cout <<"Masukkan n : ";
    in >>input.g;
    cout<<endl;
};
 
ostream& operator<<(ostream& out, Operator& output){
    output.iteratif(output.g);
    output.rekursif(output.g,1);
};
 

int main(){
    Operator x;
    cin>>x;
    cout<<x;
    getch();
}
