#include <iostream>
#include <algorithm>
using namespace std;

string formatRupiah(int angka) 
{
    string str = to_string(angka);
    int n = str.length();

    for (int i = n - 3; i > 0; i -= 3) 
    {
        str.insert(i, ".");
    }
    return "Rp" + str;
}

int main()
{
    int max_berat = 20;
    string layanan;
    float berat, harga, total;

    cout << "=== Praktikum 2(Laundry kiloan) ===" << endl;
    cout << "Daftar Layanan:" << endl;
    cout << "1. Cuci saja - Rp3.000/kg" << endl;
    cout << "2. Setrika saja - Rp5.000/kg" << endl;
    cout << "3. Cuci setrika - Rp6.000/kg" << endl;

    cout << "Masukkan jenis layanan (1/2/3): ";
    cin >> layanan;

    cout << "Masukkan berat pakaian (kg): ";
    cin >> berat;

    if (layanan == "1") 
    {
        harga = 3000;
        layanan = "Cuci saja";
    }
    else if (layanan == "3") 
    {
        harga = 6000;
        layanan = "Cuci setrika";
    } 
    else if (layanan == "2") 
    {
        harga = 5000;
        layanan = "Setrika saja";
    } 

    total = harga * berat;

    cout << endl;
    cout << "\n== Struk Pembayaran ==:" << endl;
    cout << "Layanan: " << layanan << endl;
    cout << "Berat pakaian: " << berat << " kg" << endl;
    cout << "Apakah berat melebihi " << max_berat << " kg? " << (berat > max_berat ? "Ya" : "Tidak") << endl;
    cout << "Total harga: " << formatRupiah(total) << endl;

    return 0;
}