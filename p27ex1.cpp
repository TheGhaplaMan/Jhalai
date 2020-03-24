  #include <iostream>
//  #include <math.h>
  using namespace std;
  int main(){
    int a, b, Ul=0;
    cin >> a;
    int c=a;
    while (a!=0){
      b= a%10;
      Ul= (Ul*10)+ b;
      a=a/10;
    }
//    cout << Ul;
    if (c-Ul==0)
    cout << "Palindrome!";
    else
    cout << "Not Palindrome";
    return 0;
  }
