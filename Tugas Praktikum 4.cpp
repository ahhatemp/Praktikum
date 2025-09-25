#include <iostream>
using namespace std;


int main() {
    float berat;
    int max_berat = 20;
    string layanan;
    int harga;
    int total;

    cout << "Masukkan berat pakaian (kg): ";
    cin >> berat;
    if (berat <= 10) {
        layanan = "Reguler";
    } else if (berat <= 20) {
        layanan = "Express";
    } else {
        layanan = "Kapasitas mesin penuh, pisahkan cucian!";
    }

    if (layanan == "Reguler") {
        harga = 3000;
    } else if (layanan == "Express") {
        harga = 5000;
    } else {
        harga = 0;
    }
    total = harga * berat;
    cout << "Jenis layanan: " << layanan << endl;
    cout << "Total harga: Rp" << total << endl;

    return 0;
}