#include <iostream>
using namespace std;

int main() {
  while (true) {
    long a, b;
    int carry = 0, carryNum = 0;
    cin >> a >> b;
    if (a == 0 && b == 0) {
      break;
    }
    
    while (a!=0 || b!=0) {
      carryNum = (a % 10 + b % 10 + carryNum) / 10;
      if (carryNum > 0) {
        carry++;
      }
      
      a /= 10;
      b /= 10;
    }
    
    if (carry > 1) {
      cout << carry << " carry operations." << endl;
    }
    else if (carry == 1) {
      cout << carry << " carry operation." << endl;
    }
    else {
      cout << "No carry operation." << endl;
    }
  }

  return 0;
}
