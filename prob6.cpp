#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>

#define N 100

using namespace std;

typedef long long ll;

int main( int argc, char** argv )
{
   ll sum1 = N*(N+1)/2;
   ll sum2 = N*(N+1)*(2*N+1)/6;

   cout << sum1*sum1 - sum2 << endl;
   return 0;
}
