#include <iostream>
#include <cstring>
using namespace std;
int main(){
  char a[20], b[20];
  gets (a);
  gets (b);
  int d = strcmp (a,b);
  if (d==0)
  cout << "they are SAME";
  else if (d<1)
  cout << a << " comes first" << endl;
  else
  cout << b << " comes first" << endl;

  int e = a[0] - b[0];
  if (e==0)
  cout << endl << "they are SAME";
  else if (e<1)
  cout << a << " comes first";
  else
  cout << b << " comes first";
  return 0;
}
