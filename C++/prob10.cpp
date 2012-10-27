#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>

#define SIZE (2000000)
#define max(a,b) (a > b ? a:b)

using namespace std;

typedef long long ll;

int main( int argc, char** argv )
{
   int primes[SIZE+1] = {0};
   int numPrimes = 0;
   ll sum = 0;
   ll i = 0;

   for( i = 2; i <= SIZE; i++ )
   {
      if( primes[i] == 0 )
      {
         sum += i;
         cout << "Adding " << i << endl;
         for( ll k = 2; i*k <= SIZE; k++ )
         {
            //cout << "Testing: " << i*k << endl;
            primes[i*k] = max(1,primes[i*k]);
         }
      }
   }

   cout << sum << endl;

   return 0;
}
