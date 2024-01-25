#include <iostream>  
#include "../database/DatabaseMobil.h"

void mAddMobil(string inpnNamamobil, string inpntahun, string inpngearbox, int inpharga) {
    mobil[nMobil] = inpnNamamobil;
    tahun[nMobil] = inpntahun;
    gearbox[nMobil] = inpngearbox;
    harga[nMobil] = inpharga;

    nMobil++;
}

void mViewMobil() {
    cout << " Data Mobil " <<endl;
    cout << " Jumlah Mobil : " << nMobil << endl;
    cout << "==================================================================="<<endl;
    cout << " Merek\t\tTahun\t\tGearbox\t\tHarga"<< endl;
    cout << "==================================================================="<<endl;
    for (int i = 0; i < nMobil; i++){
        cout << mobil[i]  << "\t\t" << tahun[i] << "\t\t" << gearbox[i] << "\t\t" << harga[i] << endl;
    }
    cout << "==================================================================="<<endl;
}

int mSearchMobil(string inpnNamamobil) {
    int index = -1;
    for (int i = 0; i < nMobil; i++) {
        if (mobil[i] == inpnNamamobil) {
            index = i;
            break;
        }
    }
    return index;
}