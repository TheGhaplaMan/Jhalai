#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int a, r, bin=0, i=0;
  cin >> a;
  while (a!=0){
    r = a%2;
    bin = bin + (r*pow(10,i));
    a=a/2;
    i++;
    }
    cout << bin;

  return 0;
}
