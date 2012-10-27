#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>

#define SIZE 2000000
#define MAX_N (1000000)
#define max(a,b) (a > b ? a:b)

using namespace std;

typedef long long ll;

int main( int argc, char** argv )
{
   int* memo = NULL;
   int count;
   int maxi;
   int maxChain = 0;

   memo = new int[SIZE];
   fill_n(memo,0,SIZE);
   memo[1] = 1;
   for(int i = 1; i < MAX_N; i++)
   {
      ll tmp = i;
      count = 1;
      while( 1 )
      {
         if(tmp <= SIZE && memo[tmp] > 0)
         {
            memo[i] = count + memo[tmp];
            if(memo[i] > maxChain) maxi = i;
            maxChain = max(maxChain,memo[i]);
            break;
         }
         if(!(tmp%2)) tmp /= 2;
         else tmp = 3*tmp+1;
         count++;
      }
   }

   delete [] memo;
   memo = NULL;
   cout << maxChain << " " << maxi << endl;
   return 0;
}
