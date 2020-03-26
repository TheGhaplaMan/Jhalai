#include <iostream>
#include <cstring>
using namespace std;
int main(){
  char a[100], b[100], copy[100];
  gets(a);
  gets(b);
  int d = strcmp (a,b);
  if (d==0)
  cout << "hudai 2 bar input dia lav hoilo ki?";
  else
  cout << endl << "Noice";
  cout << endl << "length a " << strlen(a) << " and  length b " << strlen(b) << endl;
  cout << strcat(a,b);
  strcpy(copy, a);
  cout << endl << "dekho abar" << endl << copy;

  return 0;
}
