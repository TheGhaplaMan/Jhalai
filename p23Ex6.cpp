  #include <iostream>
  #include <math.h>
  using namespace std;
  int main(){
    int Ax, Ay, Bx, By, Cx, Cy, a, b, c;
    double Area;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;
    a = Ax*(By-Cy);
    b = Bx*(Cy-Ay);
    c = Cx*(Ay-By);
    Area = abs ((a+b+c)/2);
    cout << Area;
    return 0;
  }
