#include <iostream>
#include <istream>
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
   char word[SIZE] = {0};
   ll count = 0;
   ll sum = 0;
   
   while(!cin.eof()) {
      cin.getline(word,SIZE,',');
      sum = 0;
      for(int i = 0; word[i] != 0; i++)
      {
         if(word[i] != '"') sum += word[i] - 'A' + 1;
      }
      if((int) sqrt(1+8*sum) > (int) sqrt(8*sum)) count++;
   }
   
   cout << count << endl;
   return 0;
}
