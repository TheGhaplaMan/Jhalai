#include <iostream>
#include <sstream>
using namespace std;
int main(){
  char line [100];
  string s;
  gets (line);
  istringstream iS(line);
  while (iS>>s)
  cout << s << "\t";
  return 0;
}
