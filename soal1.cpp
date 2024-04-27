#include <iostream>
#include <string>

using namespace std;

int main(){

    string nama,tempatTinggal;
    int umur,tabungan;

    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan Umur: ";
    cin >> umur;
    cout << "Masukkan Tempat Tinggal: ";
    cin.ignore();
    getline(cin, tempatTinggal);
    cout << "Masukkan Uang Tabungan: ";
    cin >> tabungan;

    if (umur > 40 && tempatTinggal == "Nevada" || tempatTinggal == "New York" || tempatTinggal == "Havana" && tabungan > 10000000)
    {
       cout << nama << " " << "kemungkinan adalah seorang anggota mafia dengan pangkat Don";
    } else if(umur >= 25 && umur <= 40 && tempatTinggal == "New Jersey" || tempatTinggal == "Manhattan" || tempatTinggal == "Nevada" && tabungan == 2000000){
       cout << nama << " " << "kemungkinan adalah seorang anggota mafia dengan pangkat Underbos";
    } else if(umur >= 18 && umur <= 24 && tempatTinggal == "California" || tempatTinggal == "Detroit" || tempatTinggal == "Boston" && tabungan < 1000000){
         cout << nama << " " << "kemungkinan adalah seorang anggota mafia dengan pangkat Capo";
    } else {
         cout << nama << " " << "Tidak mencurigakan";
    }
    return 0;
}