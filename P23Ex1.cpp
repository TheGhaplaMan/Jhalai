  #include <iostream>
  #include <math.h>
  using namespace std;
  int main(){
    int x1, x2, y1, y2;
    double d;
    cin >> x1 >> y1 >> x2 > y2;
    d = sqrt (((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    cout << d;

    return 0;
  }
