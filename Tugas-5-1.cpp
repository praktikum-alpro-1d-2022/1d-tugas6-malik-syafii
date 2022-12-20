#include <iostream>

using namespace std;

int main() {
  int bilangan;

  cout << "Masukkan sebuah bilangan: ";
  cin >> bilangan;

  bool prima = true; // asumsi bilangan adalah prima

  // cek apakah bilangan habis dibagi dari 2 hingga bilangan - 1
  for (int i = 2; i < bilangan; i++) {
    if (bilangan % i == 0) {
      prima = false; // bilangan habis dibagi, bukan bilangan prima
      break;
    }
  }

  if (prima) {
    cout << bilangan << " adalah bilangan prima" << endl;
  } else {
    cout << bilangan << " bukan bilangan prima" << endl;
  }

  return 0;
}
