#include <iostream>
#include <cmath>
using namespace std;
int main(){
  long long int mid, c, d, n, i, cn;
  double root;
  cin >> cn;
  for (i=0; i<cn; i++){
  cin >> n;
  cout << "Case " << i+1 << ": ";
  root = sqrt (n);
  if (root - floor (root) == 0){
    if (n%2==0)
    cout << root << " " << 1 << endl;
    else
    cout << 1 << " " << root << endl;
  }
  else {
    c = ceil(root);
    mid = (c*c) - (c-1);
    if ((c%2==0 && n<mid) || (c%2!=0 && n>mid)){
      d = abs (n-mid);
      cout << c-d << " " << c << endl;
    }
    else{
      d=abs(n-mid);
      cout << c << " " << c-d << endl;
    }
  }
}

  return 0;
}
