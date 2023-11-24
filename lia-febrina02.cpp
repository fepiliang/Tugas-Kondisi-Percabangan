#include<iostream>
using namespace std;

int main(){
    int nilaiCoding;
    string nilaiInterview;

    cout << "Masukkan nilai coding (0-100): ";
    cin >> nilaiCoding;

    cout << "Masukkan nilai interview (A/B): ";
    cin >> nilaiInterview;

    // Nilai coding
    if (nilaiCoding > 80) {
        cout << "Hasil tes coding: LOLOS" << endl;
    } else if (nilaiCoding >= 60 && nilaiCoding <= 80) {
        cout << "Hasil tes coding: DIPERTIMBANGKAN" << endl;
    } else {
        cout << "Hasil tes coding: GAGAL" << endl;
    }

    // Nilai interview
    if (nilaiInterview == "A" || nilaiInterview == "B") {
        cout << "Hasil tes interview: LOLOS" << endl;
    } else {
        cout << "Hasil tes interview: GAGAL" << endl;
    }

    // Hasil
    if ((nilaiCoding > 80 || (nilaiCoding >= 60 && nilaiCoding <= 80)) && nilaiInterview == "A" || nilaiInterview == "B") {
        cout << "Selamat Kamu Berhasil Menjadi Calon Programmer" << endl;
    } else {
        cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer" << endl;
    }

    return 0;
}