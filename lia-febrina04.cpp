#include<iostream>
using namespace std;

int main() {
    int umur;
    double tinggi;
    double tarif = 0;

    cout << "Masukkan umur anak: ";
    cin >> umur;

    if (umur < 1) {
        cout << "Dilarang masuk" << endl;
    } else {
        cout << "Masukkan tinggi anak (cm): ";
        cin >> tinggi;

        if (umur < 3) {
            tarif = 30000;
            if (umur == 2 && tinggi > 70) {
                tarif += 10000;
            }
        } else if (umur < 7) {
            tarif = 40000;
            if (umur >= 4 && tinggi > 120) {
                tarif += 15000;
            }
        } else if (umur < 10) {
            tarif = 50000;
            if (umur >= 8 && tinggi > 150) {
                tarif += 20000;
            }
        } else {
            tarif = 80000;
        }

        cout << "Tarif: Rp " << tarif << endl;
    }

    return 0;
}