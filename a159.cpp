#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  string s;
  int odd, even, temp;
  cin >> n;

  for (int i = 0; i < n; i++) {
    odd = 0;
    even = 0;
    for (int j = 0; j < 4; j++) {
      cin >> s;

      odd += (s[1] - '0') + (s[3] - '0');
      even += ((s[0] - '0') * 2) / 10 + ((s[0] - '0') * 2) % 10 +
              ((s[2] - '0') * 2) / 10 + ((s[2] - '0') * 2) % 10;
    }
    if ((odd + even) % 10) {
      cout << "Invalid" << endl;
    } else {
      cout << "Valid" << endl;
    }
  }
  return 0;
}
