#include <iostream>
using namespace std;
int main(){
  int x, c=0;
   cin >> x;
   while (x%2==0){
     x=x/2;
     c++;
   }
   cout << c;
  return 0;
}
