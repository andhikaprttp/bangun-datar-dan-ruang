#include <iostream>
using namespace std;
int main() {
  int sisi;
  cout << "Masukkan panjang sisi persegi: ";
  cin >> sisi;
  int luas = sisi * sisi;
  int keliling = 4 * sisi;
  cout << "Luas persegi: " << luas << endl;
  cout << "Keliling persegi: " << keliling << endl;
    return 0;
}
