#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>

#define max(a,b) (a > b ? a : b)

using namespace std;

typedef long long ll;

int main( int argc, char** argv )
{
   ll a, b, c;

   for( int m = 1; m < 1000; m++ )
   {
      for( int n = 1; n < 1000; n++ )
      {
         if(2*m*(m+n) == 1000)
         {
            a = m*m - n*n;
            b = 2*m*n;
            c = m*m + n*n;
         }
      }
   }

   cout << a*b*c << endl;

   return 0;
}
