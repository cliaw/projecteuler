#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

typedef long long ll;

int main( int argc, char** argv )
{
   ll n = 600851475143;

   for( ll i = 2; i*i <= n; i++ )
   {
      while( n % i == 0 )
         n = n / i;
   }

   cout << n << endl;

   return 0;
}
