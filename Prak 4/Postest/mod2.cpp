#include <iostream>
#include <string>

using namespace std;
 void iteratif {
   ?? b;
   ?? a;

   a =1;
   b =100;
   while (!(a==b))
   {
      if (a % 5==0 && a % 7==0)
      {
         cout << "Hasil Iteratif : "+a << endl;      }
      else
      {
      }
      a =a+1;
   }
}
 void rekursif (
       ??_Variable x;
       ??_Variable y)
{

   if (x<=y)
   {
      if (x % 5==0 && y % 7==0)
      {
         cout << "Hasil Rekursif : "+x << endl;      }
      else
      {
      }
      x =x+1;
      rekursif(x,y);
   }
   else
   {
   }
}
int main()
{

   iteratif);
   rekursif(1,100);

   return 0;
}
