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
    string layanan, jenis;
    float berat, harga, total;

    cout << "=== Praktikum 2(Laundry kiloan) ===" << endl;
    cout << "Daftar Layanan:" << endl;
    cout << "1. Cuci saja - Rp3.000/kg" << endl;
    cout << "2. Setrika saja - Rp5.000/kg" << endl;
    cout << "3. Cuci setrika - Rp6.000/kg" << endl;
    cout << "Jenis layanan: (Reguler/Express) Express: +50% dari total harga" << endl;

    cout << "Masukkan jenis layanan (1/2/3): ";
    cin >> layanan;

    cout << "Masukkan berat pakaian (kg): ";
    cin >> berat;
    cin.ignore();

    cout << "Jenis layanan(Reguler/Express): " ;
    getline(cin, jenis);
    transform(jenis.begin(), jenis.end(), jenis.begin(), ::tolower);

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

    if (jenis == "express") 
    {
        total = total + (0.5 * total);
    }

    cout << endl;
    cout << "\n== Struk Pembayaran ==:" << endl;
    cout << "Layanan: " << layanan << endl;
    cout << "Berat pakaian: " << berat << " kg" << endl;
    cout << "Jenis layanan: " << jenis << endl;
    cout << "Total harga: " << formatRupiah(total) << endl;

    return 0;
}