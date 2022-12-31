#include <bits/stdc++.h>
using namespace std;

// Fibonacci数列の第n項を返す関数
int fibonacci(int n) {
  // ベースケース01
  if (n == 1) {
    return 1;
  }
  // ベースケース02
  else if (n == 2) {
    return 1;
  }
  // 再帰ステップ
  else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}


// これ以降の行は変更しなくてよい
int main() {
  int n;
  cin >> n;
  cout << fibonacci(n) << endl;
}
