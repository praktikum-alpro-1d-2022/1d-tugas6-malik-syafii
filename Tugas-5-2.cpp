#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Masukkan tinggi piramida: ";
  cin >> n;

  // perulangan untuk setiap baris
  for (int i = 1; i <= n; i++) {
    // perulangan untuk setiap kolom
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
}
