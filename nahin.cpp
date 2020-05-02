#include <iostream>
using namespace std;
int main(){
  int n, res1=0 , res2=0, res;
  for (int i=0; i<=9; i++){
    cin >> n;
    if (i%2==0){
      res1= ((res1+n)+abs(res1-n))/2;
    }
    else {
      res2= ((res2+n)+abs(res2-n))/2;
    }
  }
  res = ((res1+res2)-abs(res1-res2))/2;
  cout << "2nd largest value: " << res << endl;
  return 0;
}
