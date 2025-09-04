#include <iostream>
#include <algorithm>
using namespace std;

string formatRupiah(int angka) 
{
    string str = to_string(angka);
    int n = str.length();

    for (int i = n - 3; i > 0; i -= 3) {
        str.insert(i, ".");
    }

    return "Rp" + str;
    
}

int main() {
    string barang;
    int harga;
    int jumlah;
    int total;
    int Es_krim = 5000;
    int AirMineral = 3000;
    int Roti = 4000;

    cout << "=== Warung Haikal ===" << endl;
    cout << "Daftar Barang:" << endl;
    cout << "1. Es krim - " << formatRupiah(Es_krim) << endl;
    cout << "2. Air Mineral - " << formatRupiah(AirMineral) << endl;
    cout << "3. Roti - " << formatRupiah(Roti) << endl;

    while(true) {
        cout << "Masukkan nama barang: ";
        getline(cin, barang);

        transform(barang.begin(), barang.end(), barang.begin(), ::tolower);
        
        if (barang == "es krim" || barang == "eskrim" || barang == "es_krim") {
            harga = Es_krim;
            barang = "Es_krim";
            break;

        } else if (barang == "air mineral" || barang == "airmineral" || barang == "air_mineral") {
            harga = AirMineral;
            barang = "Air Mineral";
            break;

        } else if (barang == "roti") {
            harga = Roti;
            barang = "Roti";
            break;

        } else {
            cout << "Barang tidak tersedia di warung." << endl;
        }
    }
    
    while (true) {
        cout << "Masukkan jumlah barang: ";

        if(cin >> jumlah) {
            if (jumlah > 0) {
                long int total = harga * jumlah;
                cout << "\n" << "Total harga: " << formatRupiah(total) << endl;
                cout << "Terima kasih telah berbelanja di Warung Haikal!" << endl;
                break;
            } else {
                cout << "Silakan isi jumlah yang diinginkan dengan benar" << endl;
            }
        } else {
            cout << "Silakan isi jumlah yang diinginkan dengan benar" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            
        }
        
    }
    
    cout << endl << "Tekan enter untuk keluar";
    cin.ignore();
    cin.get();

    return 0;
}