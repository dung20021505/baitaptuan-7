#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
  char a[100] ;
  char b[100];
  cin >> a;
  cin >> b;
  cout << a[99];
//  for (i=0,i<100,i++){
//  	
//  }
  cout << sizeof(b)/sizeof(b[0]);
  strcmp (a,b);
  
  return 0;
}
