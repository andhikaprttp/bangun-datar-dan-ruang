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

#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float alas, tinggi, sisi, panjang, lebar, luas, keliling;

    cout << "Program Menghitung Luas dan Keliling Bangun Datar" << endl;
    cout << "1. Segitiga" << endl;
    cout << "2. Persegi" << endl;
    cout << "3. Persegi Panjang" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas segitiga: " << luas << endl;
            cout << "Masukkan sisi segitiga: ";
            cin >> sisi;
            keliling = 3 * sisi;
            cout << "Keliling segitiga: " << keliling << endl;
            break;

        case 2:
            cout << "Masukkan sisi persegi: ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas persegi: " << luas << endl;
            keliling = 4 * sisi;
            cout << "Keliling persegi: " << keliling << endl;
            break;

        case 3:
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas persegi panjang: " << luas << endl;
            keliling = 2 * (panjang + lebar);
            cout << "Keliling persegi panjang: " << keliling << endl;
            break;

        default:
            cout << "Pilihan yang Anda masukkan tidak tersedia" << endl;
            break;
    }

    return 0;
}

