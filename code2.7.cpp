  #include <iostream>
//  #include <math.h>
  using namespace std;
  int main(){
    int a;
    cin >> a;
    if (a%400==0 || (a%100!=0 && a%4==0))
    cout << "Leap Year";
    else
    cout << "Not Leap Year";
    return 0;
  }
