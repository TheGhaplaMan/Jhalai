  #include <iostream>
  #include <math.h>
  using namespace std;
  int main(){
    int a, b, c;
    double An, Bn, Cn;
    cin >> a >> b >> c;
    An = acos(((b*b) + (c*c) - (a*a))/ (2*b*c));
    Bn = acos(((a*a) + (c*c) - (b*b))/ (2*a*c));
    Cn = = acos(((b*b) + (a*a) - (c*c))/ (2*b*a));
    cout << An << "\t" << Bn << "\t" << Cn; 
    return 0;
  }
