#include <iostream>
using namespace std;
int main() {
  int a=0, b=0, c=0, temp=0;
  for (int i=1; i<=4; i++) {
    cin >> a >> b;
    c=a-b;
    temp+=c;
    c=0;
  }
  cout << temp << endl;
} 