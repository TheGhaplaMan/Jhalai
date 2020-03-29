#include <iostream>
using namespace std;
int main(){
  int c, n;
  cin >> n;
  for (int i=0; i<n; i++){
  cin >> c;
  if (c <= 10)
  cout << "0 " << c << endl;
  else
  cout << c-10 << " " << 10 << endl;
  }
  return 0;
}
