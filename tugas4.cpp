#include<iostream>
using namespace std;
int main(){
    string username, password, c, susu;
    int p, a, b;
    double d, harga;
    
    cout << "Pilih salah satu program yang ingin dijalankan\n";
    cout << "1. Login user & password admin dengan nested if\n";
    cout << "2. memeriksa apakah tahun kabisat atau bukan\n";
    cout << "3. menu restaurant menggunakan switch\n";
    cout << "4. sistem penjualan susu dengan switch dan nested if\n";
    cout << "Pilih salah satu angka diatas : ";
    cin >> p;

    switch(p){
        case(1):
        cout << "Masukkan username anda : ";
        cin >> username;
        cout << "Masukkan password anda : ";
        cin >> password;
        if (username == "admin"){
            if (password == "admin"){
                cout << "Username dan Password sesuai, Login berhasil";
            } else {
                cout << "Username sesuai, password tidak sesuai!";
            }
        } else {
            if (password == "admin"){
                cout << "Username tidak sesuai, password sesuai!";
            } else {
                cout << "Username dan password tidak sesuai!";
            }
        }
        break;

        case(2):
        cout << "Masukkan bilangan bulat tahun yang diinginkan : ";
        cin >> a;
        if (a % 4 == 0){
            cout << "Tahun " << a << " merupakan tahun kabisat";
        } else {
            cout << "Tahun " << a << " bukan bagian dari tahun kabisat";
        }
        break;

        case(3):
        cout << "       Menu Restaurant Mc'Yahud\n";
        cout << "=================================================\n";
        cout << "   1. Nasi Goreng Informatika     Rp. 5.000,-\n";
        cout << "   2. Nasi Soto Ayam Internet     Rp. 7.000,-\n";
        cout << "   3. Gado-gado Disket            Rp. 4.500,-\n";
        cout << "   4. Bubur Ayam LAN              Rp. 4.000,-\n\n";
        cout << "Masukkan Pilihan Anda : ";
        cin >> a;
        switch(a){
            case(1):
            cout << "\nPilihan No.1 Nasi Goreng Informatika Rp.5.000,-";
            break;
            case(2):
            cout << "\nPilihan No.2 Nasi Soto Ayam Internet Rp.7.000,-";
            break;
            case(3):
            cout << "\nPilihan No.3 Gado-gado Disket Rp.4.500,-";
            break;
            case(4):
            cout << "\nPilihan No.4 Bubur Ayam LAN Rp.4.000,-";
            break;
            default:
            cout << "\nError, Masukkan pilihan yang benar!";
            break;
        } 
        break;

        case(4):
        cout << "Masukkan Kode Susu(1-3) : "; cin >> a;
        cout << "Masukkan Jumlah Pembelian : "; cin >> b;
        cout << "Masukkan Ukuran (B/S/K) : "; cin >> c;
        switch(a){
            
            default:
            cout << "Error, Masukkan pilihan yang benar!";
            break;
            
            case(1):
            susu = "Dancow";
            if(c == "B" || c == "b"){
                harga = 10000;
                if (b > 0){
                    d = harga * b;
                    cout << "\nSusu " << susu;
                    cout << "\nHarga Susu Rp. " << harga << ".00";
                    cout << "\nJumlah Pembelian Rp. " << d << ".00";
                } else {
                    cout << "Error, Mohon masukkan Jumlah Pembelian yang benar!";
                }
            } else if(c == "S" || c == "s"){
                harga = 4250;
                if (b > 0){
                    d = harga * b;
                    cout << "\nSusu " << susu;
                    cout << "\nHarga Susu Rp. " << harga << ".00";
                    cout << "\nJumlah Pembelian Rp. " << d << ".00";
                } else {
                    cout << "Error, Mohon masukkan Jumlah Pembelian yang benar!";
                }
            } else if(c == "K" || c == "k"){
                harga = 2100;
                if (b > 0){
                    d = harga * b;
                    cout << "\nSusu " << susu;
                    cout << "\nHarga Susu Rp. " << harga << ".00";
                    cout << "\nJumlah Pembelian Rp. " << d << ".00";
                } else {
                    cout << "Error, Mohon masukkan Jumlah Pembelian yang benar!";
                }
            } else {
                cout << "Error, Mohon masukkan ukurang yang benar!";
            }
            break;

            case(2):
            susu = "Indomilk";
            if(c == "B" || c == "b"){
                harga = 8500;
                if (b > 0){
                    d = harga * b;
                    cout << "\nSusu " << susu;
                    cout << "\nHarga Susu Rp. " << harga << ".00";
                    cout << "\nJumlah Pembelian Rp. " << d << ".00";
                } else {
                    cout << "Error, Mohon masukkan Jumlah Pembelian yang benar!";
                }
            } else if(c == "S" || c == "s"){
                harga = 4000;
                if (b > 0){
                    d = harga * b;
                    cout << "\nSusu " << susu;
                    cout << "\nHarga Susu Rp. " << harga << ".00";
                    cout << "\nJumlah Pembelian Rp. " << d << ".00";
                } else {
                    cout << "Error, Mohon masukkan Jumlah Pembelian yang benar!";
                }
            } else if(c == "K" || c == "k"){
                harga = 2025;
                if (b > 0){
                    d = harga * b;
                    cout << "\nSusu " << susu;
                    cout << "\nHarga Susu Rp. " << harga << ".00";
                    cout << "\nJumlah Pembelian Rp. " << d << ".00";
                } else {
                    cout << "Error, Mohon masukkan Jumlah Pembelian yang benar!";
                }
            } else {
                cout << "Error, Mohon masukkan ukurang yang benar!";
            }
            break;

            case(3):
            susu = "Sustacal";
            if(c == "B" || c == "b"){
                harga = 17000;
                if (b > 0){
                    d = harga * b;
                    cout << "\nSusu " << susu;
                    cout << "\nHarga Susu Rp. " << harga << ".00";
                    cout << "\nJumlah Pembelian Rp. " << d << ".00";
                } else {
                    cout << "Error, Mohon masukkan Jumlah Pembelian yang benar!";
                }
            } else if(c == "S" || c == "s"){
                harga = 14500;
                if (b > 0){
                    d = harga * b;
                    cout << "\nSusu " << susu;
                    cout << "\nHarga Susu Rp. " << harga << ".00";
                    cout << "\nJumlah Pembelian Rp. " << d << ".00";
                } else {
                    cout << "Error, Mohon masukkan Jumlah Pembelian yang benar!";
                }
            } else if(c == "K" || c == "k"){
                harga = 8300;
                if (b > 0){
                    d = harga * b;
                    cout << "\nSusu " << susu;
                    cout << "\nHarga Susu Rp. " << harga << ".00";
                    cout << "\nJumlah Pembelian Rp. " << d << ".00";
                } else {
                    cout << "Error, Mohon masukkan Jumlah Pembelian yang benar!";
                }
            } else {
                cout << "Error, Mohon masukkan ukurang yang benar!";
            }
            break;
        } 
        break;
        default:
        cout << "Error, Masukkan pilihan yang benar!";
        break;
    }
    return 0;
}