#include "../database/DatabasePembayaran.h"
#include <iostream>
using namespace std;

void pembayaran() {

    cout << "Pembayaran" << endl;
    mViewMobil();

    string mobil;
    cout << "Masukkan nama mobil yang akan di Rental : ";
    cin >> mobil;
    
    int index = mSearchMobil(mobil);
    if (index != -1){
        cout << " Data Mobil " << endl;
        cout << "=========================================================================="<<endl;
        cout << "Mobil\t\tTahun\t\tGearbox\t\tHarga"<<endl;
        cout << "=========================================================================="<<endl;
        cout <<  mobil << "\t\t" << tahun[index] << "\t\t" << gearbox[index]<<"\t\t"<< harga[index]<< endl;
        cout << "==========================================================================="<<endl; 
    }else{
        cout << "Mobil tidak ditemukan"<< endl;
    }

    cout << "Masukkan Tanggal sewa (DD) : ";
    cin >> tanggal; 
    cout << "Masukkan Tanggal pengembalian (DD) : ";
    cin >> tenggat_waktu;

    cout << "Deposit Minimal 30%" << endl;
    cout << "Masukkan jumlah Deposit : Rp. ";
    cin >> deposit;
    if (deposit >= 50000 ) {
        system("cls");
    total_hari = tenggat_waktu-tanggal;
    total_harga = harga[index] * total_hari - deposit;
    cout << "RENTAL IN AJA" << endl;
    cout << "===================================================================================="<<endl;
    cout << "Mobil\t\tTahun\t\tGearbox\t\tHarga"<<endl;
    cout << "===================================================================================="<<endl;
    cout <<  mobil << "\t\t" << tahun[index] << "\t\t" << gearbox[index]<<"\t\t"<< harga[index] << endl;
    cout << "===================================================================================="<<endl;
    cout << "Tanggal Sewa\t\tTanggal Pengembalian\t\tHari\t\tDeposit" << endl;
    cout << "===================================================================================="<<endl;
    cout <<  tanggal << "\t\t\t" << tenggat_waktu << "\t\t\t\t" << total_hari << "\t\t" << deposit << endl;
    cout << "===================================================================================="<<endl;
    cout << "Total Harga" << endl;
    cout << "===================================================================================="<<endl;
    cout <<  total_harga << endl;
    cout << "===================================================================================="<<endl;
    system("pause");
    int pilihan_bayar;
    int pilihan_ewallet;
    cout << "Menu Pembayaran" << endl;
    cout << "1. Transfer"<<endl;
    cout << "2. Tunai"<< endl;
    cout << "3. e-Wallet" << endl;
    cout << "Masukkan pilihan :";
    cin >> pilihan_bayar;
    switch (pilihan_bayar){
        case 1:
        cout << "Transfer" << endl;
        cout << "BCA" << endl;
        cout << "a/n RENTAL IN AJA" << endl;
        cout << "0886789672" << endl;
        cout << "Sebesar : Rp. " << total_harga << endl;
        cout << "Transaksi Berhasil" << endl;
        cout << "Terimakasih Telah Rental" << endl;
        exit(0);
        break;
        case 2:
        cout << "Tunai" << endl;
        cout << "Sebesar : Rp. " << total_harga << endl;
        cout << "Terimakasih Telah Rental" << endl;
        exit(0);
        case 3:
        cout << "e-Wallet" << endl;
        cout << "1. Dana"<<endl;
        cout << "2. Shopeepay"<< endl;
        cout << "3. Gopay" << endl;
        cout << "Masukkan pilihan :";
        cin >> pilihan_ewallet;
        switch (pilihan_ewallet){
            case 1:
            cout << "Dana" << endl;
            cout << "a/n RENTAL IN AJA" << endl;
            cout << "082346789178" << endl;
            cout << "Sebesar : Rp. " << total_harga << endl;
            cout << "Transaksi Berhasil" << endl;
            cout << "Terimakasih Telah Rental" << endl;
            break;
            case 2:
            cout << "Shopeepay" << endl;
            cout << "a/n RENTAL IN AJA" << endl;
            cout << "082346789178" << endl;
            cout << "Sebesar : Rp. " << total_harga << endl;
            cout << "Transaksi Berhasil" << endl;
            cout << "Terimakasih Telah Rental" << endl;
            break;
            case 3:
            cout << "Gopay" << endl;
            cout << "a/n RENTAL IN AJA" << endl;
            cout << "082346789178" << endl;
            cout << "Sebesar : Rp. " << total_harga << endl;
            cout << "Transaksi Berhasil" << endl;
            cout << "Terimakasih Telah Rental" << endl;
            break;
            default:
            cout << "pilihan tidak tersedia"<<endl;
            break;
        }
        default:
            cout << "pilihan tidak tersedia"<<endl;
            break;
    }
    
    } else {
        cout << "Deposit Kurang" << endl;
        cout << "Transaksi Gagal" << endl;
    }
}
    