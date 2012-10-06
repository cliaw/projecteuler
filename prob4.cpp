#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>

#define max(a,b) (a > b ? a : b)

using namespace std;

typedef long long ll;

bool isPal( long int x )
{
   long int l = 10,h;
   if( x < 10 )
      return true;
   for( h = 1; 10*h < x; h *= 10 );

   while( l <= h )
   {
      int tmp_l, tmp_h;
      tmp_l = (x % l) / (l / 10);
      tmp_h = (x / h) % 10;
      //cout << "Printing " << tmp_l << tmp_h << endl;
      if( tmp_l != tmp_h ) return false;
      h /= 10;
      l *= 10;
   }
   return true;
}

int main( int argc, char** argv )
{
   long int tmp;
   long int product = 0;

   for( int i = 100; i < 1000; i++ )
   {
      for( int j = i; j < 1000; j++ )
      {
         if(isPal(i*j)) product = max(product,i*j);
      }
   }

   cout << product << endl;

   return 0;
}
