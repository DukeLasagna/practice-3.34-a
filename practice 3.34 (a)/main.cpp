#include <iostream>

using namespace std;
// factorial of n = n!
int main()
{
  int n;
  int b; //counter
  int c;
  int d;
  int e;
  int f;
  int g;
  b=1;
  g = 1;
  cout << "Please enter a number and see the magic happen " << endl;
  cin >> n;
  cout << n << " != " << n << " X " ;
  while ( b != n )
  {
   b++;
   g = g * b;
  if( b <= n-2 ){
  cout << b << " X " ;
  }
  if(b == n-1){
    cout << b;
  }

  }


  cout << " = " << g <<endl;
    return 0;
}
