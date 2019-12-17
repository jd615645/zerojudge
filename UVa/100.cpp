#include<iostream>
using namespace std;

int main() {
  int a, b, tmp;
  
  while (cin >> a >> b) {
    int len = 1, max = 0;
    bool swap = false;

    if (a > b) {
      tmp = a;
      a = b;
      b = tmp;
      swap = true;
    }
    
    for (int i = a; i <= b; i++) {
      int n = i;
      len = 1;
      while (!(n == 1)) {
        if (n % 2 == 0) {
          n = n / 2;
        }
        else {
          n = 3 * n + 1;
        }
        len++;
      }
      
      if (len > max) {
      	max = len;
      }
    }
    
    if (swap) {
      tmp = a;
      a = b;
      b = tmp;
    }
    
    cout << a << " " << b << " " << max << endl;
  }

  return 0;
}
