  #include <iostream>
  #include <math.h>
  using namespace std;
  int main(){
    int a, b, c;
    double p, Ar;
    cin >> a >> b >> c;
    p = (a+b+c)/2;
    Ar = sqrt (p*(p-a)*(p-b)*(p-c));
    cout << Ar;

    return 0;
  }
