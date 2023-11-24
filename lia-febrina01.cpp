#include<iostream>
using namespace std;

int main(){
    string nama, tempattinggal;
    int umur, tabungan;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Masukkan umur: ";
    cin >> umur;

    cout << "Masukkan tempat tinggal: ";
    cin.ignore();
    getline(cin, tempattinggal);

    cout << "Masukkan tabungan dalam dollar: ";
    cin >> tabungan;
    // Don
    if (umur > 40 && (tempattinggal == "Nevada" || tempattinggal == "New York" || tempattinggal == "Havana") && tabungan > 10000000) {
        cout << "'" << nama << "' kemungkinan adalah seorang anggota mafia dengan pangkat Don." << endl;
    }
    // Underboss
    else if (umur >= 25 && umur <= 40 && (tempattinggal == "New Jersey" || tempattinggal == "Manhattan" || tempattinggal == "Nevada") && tabungan >= 1000000 && tabungan <= 2000000) {
        cout << "'" << nama << "' kemungkinan adalah seorang anggota mafia dengan pangkat Underboss." << endl;
    }
    // Capo
    else if (umur >= 18 && umur <= 24 && (tempattinggal == "California" || tempattinggal == "Detroit" || tempattinggal == "Boston") && tabungan < 1000000) {
        cout << "'" << nama << "' kemungkinan adalah seorang anggota mafia dengan pangkat Capo." << endl;
    }
    // Tidak memenuhi syarat
    else {
        cout << "'" << nama << "' tidak mencurigakan." << endl;
    }

    return 0;

    }