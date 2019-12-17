#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  long nSize = 0;
  int count = 1;

  while(n--) {
    char a, b;
    long long mx[100000] = {0};
    bool ne = true;
    bool same = true;

    cin >> a >> b >> nSize;
    for (long i = 0; i < nSize*nSize; i++) {
      cin >> mx[i];
      if (mx[i] < 0) {
        ne = false;
      }
    }
    
    for (long i = 0; i < nSize*nSize/2; i++) {
      if (mx[i] != mx[nSize*nSize-1-i]) {
        same = false;
      }
    }
    
    if (ne && same) {
      cout << "Test #" << count++ << ": Symmetric." << endl;
    }
    else {
      cout << "Test #" << count++ << ": Non-symmetric." << endl;
    }
  }
}
