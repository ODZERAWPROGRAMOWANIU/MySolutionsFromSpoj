#include <iostream>
using namespace std;
int main() {
long long a, b, area;
  int amount, circuit;
  cin >> amount;
  while (amount--) {
    cin >> circuit;
    if (circuit %2!=0) {
      cout << "BRAK" << endl;
    }
    else {
    b=circuit/4;
    a=circuit/2-b;
    area=a*b;
    if (area!=0) 
      cout << area << endl;
  
  else 
    cout << "BRAK" << endl;
  
  }
    }
  } 