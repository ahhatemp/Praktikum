#include <iostream>
using namespace std;

int main () {
    int one_usd = 15000;
    double usd;
    double total_usd;
    double idr;
    double total_idr;
    int pilihan;

    cout << "Pilih mata uang yang ingin dikonversi: " << endl;
    cout << "1. IDR ke USD" << endl;
    cout << "2. USD ke IDR" << endl;
    
    cout << "Masukkan pilihan (1 atau 2): ";
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "Masukkan jumlah IDR: Rp";
        cin >> idr;
        total_usd = idr / one_usd;
        cout << "Hasil konversi: $ " << total_usd << endl;
    } else if (pilihan == 2) {
        cout << "Masukkan jumlah USD: $";
        cin >> usd;
        total_idr = usd * one_usd;
        cout << "Hasil konversi: Rp " << total_idr << endl;
    } else {
        cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}