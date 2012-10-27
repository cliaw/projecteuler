#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <bitset>

#define SIZE (7654321)
#define max(a,b) (a > b ? a:b)

using namespace std;

typedef long long ll;

bool isPandigital(int n);

int main( int argc, char** argv )
{
   vector<bool> primes;
   ll i = 0;
   ll maxPrime = 0;
   
   for(ll j = 0; j <= SIZE+200; j++)
      primes.push_back(false);
   
   for( i = 2; i <= SIZE; i++ )
   {
      if( primes[i] == 0 )
      {
         for( ll k = 2; i*k <= SIZE; k++ )
            primes[i*k] = 1;
         if(isPandigital(i)) maxPrime = max(maxPrime,i);
      }
   }
   cout << maxPrime << endl;
   return 0;
}

bool isPandigital(int n)
{
   bitset<10> flags(0);
   int j = 0;
   while( n )
   {
      if(flags[n%10] == 0)
         flags[n%10] = 1;
      else
         return false;
      n /= 10;
   }
   if(flags[j++] == 1) return false;
   while(j < 10)
   {
      if( flags[j++] == 0 ) break;
   }
   while(j < 10)
   {
      if( flags[j++] == 1 ) return false;
   }
   return true;
}