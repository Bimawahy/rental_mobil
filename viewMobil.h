#include <iostream>
#include <string>
#include "../model/Modelmobil.h"
using namespace std;

// Deklarasikan variabel global yang digunakan di sini
extern string tahun[MAX_MOBIL];
extern string gearbox[MAX_MOBIL];

void vAddmobil() {
    string mobil;
    string tahun;
    string gearbox;
    int harga;

    cout << "Masukkan mobil yang ditambahkan : ";
    cin.ignore();
    getline(cin, mobil);
    cout << "Masukkan tahun pembuatan mobil : ";
    cin >> tahun;
    cout << "Masukkan tipe gearbox mobil : ";
    cin >> gearbox;
    cout << "Masukkan harga rental mobil : Rp.";
    cin >> harga;

    mAddMobil(mobil, tahun, gearbox, harga);
}

void vViewMobil() {
    system("cls");
    mViewMobil();
}

void vSearchmobil() {
    string mobil;
    cout << "Masukkan nama mobil : ";
    cin.ignore();
    getline(cin, mobil);
    
    int index = mSearchMobil(mobil);
    if (index != -1){
        cout << " Data Mobil " << endl;
        cout << "=========================================================================="<<endl;
        cout << "Mobil\t\tTahun\t\tGearbox\t\tHarga"<<endl;
        cout << "=========================================================================="<<endl;
        cout << mobil << "\t\t" << tahun[index] << "\t\t" << gearbox[index]<<"\t\t"<< harga[index]<< endl;
        cout << "==========================================================================="<<endl; 
    }else{
        cout << "Mobil tidak ditemukan"<< endl;
    }
}