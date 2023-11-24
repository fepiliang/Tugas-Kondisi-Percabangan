#include<iostream>
using namespace std;

int main(){
    int nomorPunggung;

    cout << "Masukkan nomor punggung pemain: ";
    cin >> nomorPunggung;

    if (nomorPunggung % 2 == 0) {
        // Nomor punggung genap
        if (nomorPunggung >= 50 && nomorPunggung <= 100) {
            cout << "Posisi pemain: Target Attacker (Capten Team)" << endl;
        } else {
            cout << "Posisi pemain: Target Attacker" << endl;
        }
    } else {
        // Nomor punggung ganjil
        if (nomorPunggung % 3 == 0 && nomorPunggung % 5 == 0) {
            cout << "Posisi pemain: Keeper" << endl;
        } else if (nomorPunggung > 90) {
            cout << "Posisi pemain: Playmaker" << endl;
        } else {
            cout << "Posisi pemain: Defender" << endl;
        }
    }

    return 0;
}