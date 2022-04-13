#include <iostream>
#include <string>
using namespace std;

class Bagi{
   friend istream& operator>>(istream&, Bagi&);
   friend ostream& operator<<(ostream&, Bagi&);
   public:
      Bagi();
      void iteratif();
      int rekursif(int a);
   private:
      int a = 1;
      int b = 100;
};

Bagi::Bagi(){
   cout<<"Menampilkan bilangan yang habis dibagi 5 dan 7 antara 1 sampai 100"<<endl;
}

//iteratif
void Bagi::iteratif(){
   while (!(a>b)){
      if (a % 5==0 && a % 7==0){
         cout << a << endl;
      }else{}
      a =a+1;
   }
}

//rekursif
int Bagi::rekursif (int a){
   if (a<=b){
            if (a % 5==0 && a % 7==0){
         cout << a << endl;      
      }
      else{}
      return rekursif(a+1);
   }
}

int main(){
   Bagi X;
   cout<<"Hasil Iteratif"<<endl;
   X.iteratif();
   cout<<""<<endl;
   cout<<"Hasil Rekursif: "<<endl;
   X.rekursif(1);
   return 0;
}
