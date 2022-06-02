#include <iostream>
#include <string>

using namespace std;
int main()
{
   ?? y;
   ?? temp;
   ?? i;
   ?? n;
   ?? v;
   ??[] x = new ??[??+1];

   n =8;
   x[1] = 9;
   x[2] = 2;
   x[3] = 1;
   x[4] = 4;
   x[5] = 11;
   x[6] = 10;
   x[7] = 18;
   x[8] = 6;
   cout << "Data belum terurut: " << endl;   i =1;
   while (!(n<i))
   {
      cout << x(i)+" " << endl;      i =i+1;
   }
   cout << " " << endl;   v =1;
   while (!(v>n-1))
   {
      cout << "(Langkah Ke-"+v+") = " << endl;      y =n;
      while (!(y<v+1))
      {
         if (x(y)<x(y-1))
         {
            temp =x(y);
            x[y] = x(y-1);
            x[y-1] = temp;
         }
         else
         {
         }
         y =y-1;
      }
      i =1;
      while (!(n<i))
      {
         cout << x(i)+" " << endl;         i =i+1;
      }
      cout << " " << endl;      v =v+1;
   }
   cout << "Data telah terurut: " << endl;   i =1;
   while (!(n<i))
   {
      cout << x(i)+" " << endl;      i =i+1;
   }
   cout << " " << endl;
   return 0;
}
