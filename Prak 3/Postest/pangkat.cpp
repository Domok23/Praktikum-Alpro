#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int x,y,i;
    int pangkat=1;
	 
    cout<<"\t\t\tMENGHITUNG HASIL PERPANGKATAN\n";
    cout<<endl;
    cout<<" Masukkan Bilangan = ";
	cin>>x;
    cout<<" Masukkan Pangkat  = ";
	cin>>y;
    for(i=1;i<=y;i++){
    	pangkat*=x;
    }
    cout<<endl;
    cout<<" ";
    cout<<x<<" Pangkat "<<y<<" = "<<pangkat;
    return 0;
}
