#include <iostream>
using namespace std;


int main() {
    float berat;
    int max_berat = 20;
    int layanan;
    int harga;
    int total;
    int pilihan;

    cout << "Selamat datang di layanan laundry!" << endl;
    
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
            cin.ignore();
            break;
        case 2:
            cout << "Anda memilih layanan Cuci kilat" << endl;
            harga = 5000;
            cout << "Masukkan berat pakaian (kg): ";
            cin >> berat;
            cin.ignore();
            break;
        case 3:
            cout << "Anda memilih layanan Setrika" << endl;
            harga = 4000;
            cout << "Masukkan berat pakaian (kg): ";
            cin >> berat;
            cin.ignore();
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
    cout << endl;
    

    do {
        cout << "Tools:" << endl;
        cout << "1. Tambah cucian" << endl;
        cout << "2. Hapus cucian" << endl;
        cout << "3. Lihat total cucian yang ada" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan (1-4): ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                cout << "Masukkan berat tambahan (kg): ";
                float tambahan;
                cin >> tambahan;
                if (berat + tambahan > max_berat) {
                    cout << "Kapasitas mesin penuh, pisahkan cucian!" << endl;
                    cout << endl;
                } else {
                    berat += tambahan;
                    total = harga * berat;
                    cout << "Berat cucian sekarang: " << berat << " kg" << endl;
                    cout << "Total harga sekarang: Rp" << total << endl;
                    cout << endl;
                }
                break;
            case 2:
                cout << "Masukkan berat yang ingin dihapus (kg): ";
                float hapus;
                cin >> hapus;
                if (hapus > berat) {
                    cout << "Berat yang dihapus melebihi berat cucian!" << endl;
                    cout << endl;
                } else {
                    berat -= hapus;
                    total = harga * berat;
                    cout << "Berat cucian sekarang: " << berat << " kg" << endl;
                    cout << "Total harga sekarang: Rp" << total << endl;
                    cout << endl;
                }
                break;
            case 3:
                cout << "Berat cucian saat ini: " << berat << " kg" << endl;
                cout << "Total harga saat ini: Rp" << total << endl;
                cout << endl;
                break;
            case 4:
                cout << "Terima kasih telah menggunakan layanan kami!" << endl;
                cout << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                cout << endl;
        }
    }
    while(pilihan != 4);

    

    return 0;
}