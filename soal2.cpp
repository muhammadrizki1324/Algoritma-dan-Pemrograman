#include <iostream>
#include <string>

using namespace std;

int main(){


      int nilaiCoding;
   char nilaiInterview;

   cout << "Masukkan Nilai Coding (0 - 100): ";
   cin >> nilaiCoding;
   cout << "Masukkan Nilai Interview (A, B, C, D): ";
   cin >> nilaiInterview;

   if(nilaiCoding >= 80 ){
      cout << "Hasil tes anda Lolos" << endl;
   } else if(nilaiCoding >= 60 && nilaiCoding < 80){
      cout << "Hasil tes dipertimbangkan" << endl;
   }else{
      cout << "Gagal" << endl;
   }

   if (nilaiInterview == 'A' || nilaiInterview == 'B')
   {
      cout << "Selamat anda LOLOS interview" << endl;
   } else{
      cout << "Maaf anda gagal tahan interview" << endl;
   }
   
   if(nilaiCoding >= 60 || nilaiCoding >=80 && nilaiInterview == 'A' || nilaiInterview == 'B'){
      cout << "Selamat Kamu Berhasil Menjadi Calon Programmer";
   } else {
      cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer";
   }
    return 0;
}