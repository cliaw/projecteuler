#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>

#define SIZE (1000000)
#define max(a,b) (a > b ? a:b)

using namespace std;

typedef long long ll;

int main( int argc, char** argv )
{
   int primes[SIZE+1] = {0};
   int numPrimes = 0;
   ll i = 0;

   for( i = 2; i <= SIZE && numPrimes < 10001; i++ )
   {
      if( primes[i] == 0 )
      {
         numPrimes++;
         for( ll k = 2; i*k <= SIZE; k++ )
         {
            //cout << "Testing: " << i*k << endl;
            primes[i*k] = max(1,primes[i*k]);
         }
      }
   }

   if( numPrimes == 10001 )
   {
      cout << i-1 << endl;
   } else {
      cout << "SIZE NOT BIG ENOUGH!! Got up to " << numPrimes << endl;
   }

   return 0;
}
