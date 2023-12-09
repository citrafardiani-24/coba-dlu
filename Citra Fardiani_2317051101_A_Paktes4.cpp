#include <iostream>

using namespace std;

int main() {
  int bilangan;
  cout << "Masukkan bilangan bulat : ";
  cin >> bilangan;

  if (bilangan > 0) {
    cout << "Positif" << endl;
  } else if (bilangan < 0) {
    cout << "Negatif" << endl;
  } else {
    cout << "Nol" << endl;
  }

  return 0;
}
