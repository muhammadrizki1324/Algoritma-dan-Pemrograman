#include <iostream>
using namespace std;

int main() {
    int umur, tinggi, harga;

    cout << "Masukkan umur anak: ";
    cin >> umur;
    cout << "Masukkan tinggi anak (cm): ";
    cin >> tinggi;

    if (umur < 1) {
        cout << "Dilarang masuk" << endl;
    } else if (umur < 3) {
        harga = 30000;
        if (tinggi > 70) {
            harga += 10000;
        }
    } else if (umur < 7) {
        harga = 40000;
        if (tinggi > 120) {
            harga += 15000;
        }
    } else if (umur < 10) {
        harga = 50000;
        if (tinggi > 150) {
            harga += 20000;
        }
    } else {
        harga = 80000;
    }

    cout << "Tarif harga untuk anak tersebut adalah: Rp " << harga << endl;

    return 0;
}
