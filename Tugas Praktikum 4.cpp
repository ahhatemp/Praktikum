#include <iostream>
using namespace std;


int main() {
    float berat;
    int max_berat = 20;
    int layanan;
    int harga;
    int total;

    cout << "Pilih jenis layanan cucian:" << endl;
    cout << "1. Cuci Reguler (Rp3000/kg)" << endl;
    cout << "2. Cuci kilat (Rp5000/kg)" << endl;
    cout << "3. Setrika (Rp4000/kg)" << endl;
    cin >> layanan;

    switch (layanan) {
        case 1:
            cout << "Anda memilih layanan Cuci Reguler" << endl;
            harga = 3000;
            cout << "Masukkan berat pakaian (kg): ";
            cin >> berat;
            break;
        case 2:
            cout << "Anda memilih layanan Cuci kilat" << endl;
            harga = 5000;
            cout << "Masukkan berat pakaian (kg): ";
            cin >> berat;
            break;
        case 3:
            cout << "Anda memilih layanan Setrika" << endl;
            harga = 4000;
            cout << "Masukkan berat pakaian (kg): ";
            cin >> berat;
            break;
        default:
            cout << "Layanan tidak tersedia" << endl;
            return 0;
    }

    if (berat > max_berat) {
        cout << "Kapasitas mesin penuh, pisahkan cucian!" << endl;
        return 0;
    }
    total = harga * berat;
    cout << "Total harga: Rp" << total << endl;


    return 0;
}