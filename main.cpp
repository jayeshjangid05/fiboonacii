#include <iostream>
using namespace std;
void fibonacci(int first, int second, int total, int count) {
  if (second > total || count > 10) {
    return;
  }
  count = count + 1;
  int sum = first + second;
  cout << sum << endl;
  fibonacci(second, sum, total, count);
}
int main() {
  cout << 0 << endl;
  cout << 1 << endl;
  fibonacci(0, 1, 13, 0);
  return 0;
}