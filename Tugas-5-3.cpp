#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Masukkan batas deret Fibonacci: ";
  cin >> n;

  int a = 0; // nilai pertama dari deret Fibonacci
  int b = 1; // nilai kedua dari deret Fibonacci

  cout << a << " " << b << " "; // tampilkan nilai pertama dan kedua

  // perulangan untuk menghitung nilai selanjutnya dari deret Fibonacci
  for (int i = 2; i < n; i++) {
    int c = a + b; // hitung nilai selanjutnya
    cout << c << " "; // tampilkan nilai selanjutnya
    a = b; // ubah nilai a menjadi b
    b = c; // ubah nilai b menjadi c
  }

  return 0;
}
