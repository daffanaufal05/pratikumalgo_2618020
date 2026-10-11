#include <iostream>
using namespace std;

int main() {
    float jariJari, tinggi, volume;
    const float phi = 3.14;

    cout << "=== Program Menghitung Volume Tabung ===" << endl;
    cout << "Masukkan jari-jari tabung : ";
    cin >> jariJari;
    cout << "Masukkan tinggi tabung    : ";
    cin >> tinggi;

    volume = phi * jariJari * jariJari * tinggi;
    cout << "Volume Tabung adalah: " << volume << endl;

    return 0;
}
