#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>

#define SIZE 20
#define max(a,b) (a > b ? a:b)

using namespace std;

typedef long long ll;

int main( int argc, char** argv )
{
   int A[SIZE+1] = {0};
   int product = 1;
   A[1] = 1;

   for( int i = 2; i <= SIZE; i++ )
   {
      int tmp[SIZE+1] = {0};
      int tmp_i = i;
      for(int j = 2; j*j <= tmp_i; j++)
      {
         while( tmp_i % j == 0 )
         {
            tmp_i = tmp_i / j;
            tmp[j]++;
         }
      }
      tmp[tmp_i]++;
      for(int j = 2; j <= i; j++)
      {
         A[j] = max(A[j],tmp[j]);
      }
   }

   for( int i = 2; i <= SIZE; i++ )
   {
      while(A[i]--) product *= i;
   }

   cout << product << endl;

   return 0;
}
