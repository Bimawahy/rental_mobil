#include <iostream>
#include <string>
#include "../database/Databaseprofil.h"

using namespace std;

void maddprofil (string inpnama,string inpnotelp,string inpusername,string inppassword){
    name[nprofil]= inpnama;
    notelp[nprofil]= inpnotelp;
    username[nprofil]= inpusername;
    password[nprofil]= inppassword;
    nprofil++;
}

void mViewprofil (){
    cout << " Data Member " <<endl;
    cout << " Jumlah Member : " << nprofil << endl;
    cout << "============================================================================="<<endl;
    cout << " Nama\t\tNo. Telp\t\tusername\t\tPassword"<< endl;
    cout << "============================================================================="<<endl;
    for (int i = 0; i < nprofil; i++){
        cout << name[i] << "\t\t" << notelp[i] << "\t\t" << username[i] << "\t" << password[i] << endl;
    }
    cout << "============================================================================="<<endl;
}

void mnama (){
    for (int a = 0; a < nprofil; a++)
    cout << "\tHalo " << name[a]<< endl;
}

int mSearchprofil(string inpnotelp) {
    for (int i = 0; i < nprofil; i++) {
        if (notelp[i] == inpnotelp) {
            return i;  
        }
    }
    return -1;  
}


int mSearchLoginusername(string inpusername){
    for (int i = 0; i< nprofil; i++){
        if (username[i] == inpusername){
            return 1;
        }
    }
    return -1;
}
int mSearchLoginpass(string inppassword){
    for (int i =0; i< nprofil; i++){
        if (password[i] == inppassword){
            return 1;
        }
    }
    return -1;
}

void mUpdateprofil(string inpnotelp, string inppass) {
    int index = mSearchprofil(inpnotelp);

    if (index != -1) {
        // Update the password if the profile is found
        password[index] = inppass;
        cout << "Password berhasil diubah" << endl;
    } else {
        // Output if the phone number is not found
        cout << "No. telp tidak ditemukan" << endl;
    }
}


bool mLogin(string inpnotelp,string inppassword){
    for (int i=0; i < nprofil; i++){
        if (notelp[i] == inpnotelp && password[i] == inppassword){
            return true;
        }
    }
    return false;
}