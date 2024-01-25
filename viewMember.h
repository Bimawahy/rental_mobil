#include "../model/modelprofil.h"
#include <iostream>
#include <string> 
using namespace std; 

void vAddMember(){
    string inpnama,inpnotelp,inpusername,inppassword;
    cout << "Masukkan Nama : ";
    cin.ignore();
    getline(cin, inpnama);
    cout << "Masukkan No.telp : ";
    cin >> inpnotelp;
    cout << "Masukkan username : ";
    cin >> inpusername;
    cout << "Masukkan Password : ";
    cin >> inppassword;
    maddprofil(inpnama, inpnotelp, inpusername, inppassword);
}

void login() {
    string inppassword, inpusername;
    do {
    system("cls");
    cout << "========================================" <<endl;
    cout << "SELAMAT DATANG DI RENTAL IN AJA"<< endl;
    cout << "========================================" <<endl;
    cout << "Silahkan Login" << endl;
    cout << "Masukkan Username: ";
    cin >> inpusername;
    cout << "Masukkan Password: ";
    cin >> inppassword;
    
    int indexuser = mSearchLoginusername(inpusername);
    int userpass = mSearchLoginpass(inppassword);

        if (indexuser != -1 && userpass != -1) {
            cout << "Login Berhasil!\n";
            return; 
        } else {
            cout << "Password & Username anda Salah. Silahkan coba lagi.\n";
            system("pause");
        }
    } while (true);
}

void vViewprofil(){
    mViewprofil();
}

void vSearchprofil() {
    string inpnotelp;
    cout << "Masukkan No.telp : ";
    cin >> inpnotelp;
    int index = mSearchprofil(inpnotelp);

    if (index != -1) {
        cout << " Data Member " << endl;
        cout << "===========================================" << endl;
        cout << "Nama\t\tNo.telp\t\tUsername\t\tPassword" << endl;
        cout << "===========================================" << endl;
        cout << name[index] << " \t\t" << notelp[index] << "\t\t" << username[index] << "\t\t" << password[index] << endl;
        cout << "===========================================" << endl; 
    } else {
        cout << "No,telp tidak ditemukan" << endl;
    }
}


void vUpdatepass(){
    string inpnotelp,inppassword;
    cout << "Masukkan No.telp : ";
    cin >> inpnotelp;
    cout << "Masukkan Password baru : ";
    cin >> inppassword;

    mUpdateprofil(inpnotelp, inppassword);
}

