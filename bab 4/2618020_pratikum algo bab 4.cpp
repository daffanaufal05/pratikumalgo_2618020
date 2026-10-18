#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string nama, nim;
    double pendapatan, pajak, tarif;
    int tanggungan;

    cout << "===== PROGRAM PAJAK PENDAPATAN =====" << endl << endl;
    
    cout << "Nama Anda : "; 
    getline(cin, nama);
    
    cout << "NIM Anda  : "; 
    getline(cin, nim);
    
    cout << endl << "DATA PENDAPATAN" << endl << endl;
    
    cout << "Pendapatan bulanan: Rp. ";
    cin >> pendapatan; 
    
    if (pendapatan < 0) {
        cout << "Input tidak valid!" << endl;
        return 0;
    } 
    
    cout << "Memiliki tanggungan? (1=Ya, 0=Tidak): ";
    cin >> tanggungan;

    
    if (pendapatan < 5000000) {
        tarif = 0;
    } else if (pendapatan < 10000000) {
        tarif = 0.05;
    } else if (pendapatan < 20000000) {
        tarif = 0.10;
    } else {
        tarif = 0.15;
    }

    pajak = pendapatan * tarif;
    
    
    if (tanggungan == 1) {
        pajak -= 100000;
    }
    
    if (pajak < 0) {
        pajak = 0;
    }

    cout << endl;
    cout << fixed << setprecision(0);
    cout << "Tarif pajak: " << tarif * 100 << "%" << endl;
    cout << "Pajak akhir: Rp. " << pajak << endl;

    return 0;
}
