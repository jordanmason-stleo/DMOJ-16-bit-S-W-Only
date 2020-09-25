#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  long double a = 0;
  long double b = 0;
  long double p = 0;
  int n = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b >>p;
    if (a * b == p) {
      cout << "POSSIBLE DOUBLE SIGMA" << endl;
        } else {
      cout << "16 BIT S/W ONLY" << endl;
        }

  }
}
