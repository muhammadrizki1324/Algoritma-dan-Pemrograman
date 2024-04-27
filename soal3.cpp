#include <iostream>


using namespace std;

int main(){

    

     int nomor_punggung;

    cout << "Masukkan nomor punggung pemain: ";
    cin >> nomor_punggung;

    if (nomor_punggung % 2 == 0) {
        if (nomor_punggung >= 50 && nomor_punggung <= 100) {
            cout << "Nomor punggung genap antara 50-100 digunakan untuk pemain yang berhak menjadi kapten team." << endl;
        } else {
            cout << "Nomor punggung genap digunakan untuk posisi target attacker." << endl;
        }
    } else {
        if (nomor_punggung > 90) {
            cout << "Nomor punggung ganjil lebih dari 90 digunakan untuk posisi Playmaker." << endl;
        } else if (nomor_punggung % 3 == 0 || nomor_punggung % 5 == 0) {
            cout << "Nomor punggung ganjil kelipatan dari 3 atau 5 digunakan untuk posisi keeper." << endl;
        } else {
            cout << "Nomor punggung ganjil digunakan untuk posisi defender." << endl;
        }
    }



      
    return 0;
}