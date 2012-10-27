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
   ll memo[SIZE+1][SIZE+1] = {0};
   
   for(int i = 0; i <= SIZE; i++) {
      for(int j = 0; j <= SIZE; j++) {
         if(i == 0 || j == 0)
            memo[i][j] = 1;
         else
            memo[i][j] = memo[i-1][j] + memo[i][j-1];
      }
   }
   
   cout << memo[SIZE][SIZE] << endl;
   return 0;
}
