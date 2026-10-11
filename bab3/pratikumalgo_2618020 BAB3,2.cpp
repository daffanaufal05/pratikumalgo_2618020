#include <iostream>
using namespace std;

int main() {
    float celcius, fahrenheit, reamur, naufal;

    cout << "PROGRAM KONVERSI SUHU" << endl;
    cout << endl;
    cout << "Masukan Suhu (Celcius) = ";
    cin >> celcius;
    fahrenheit = (celcius * 9 / 5) + 32;
    reamur = celcius * 4 / 5;
    naufal = celcius + 273.15;

    cout << endl;
    cout << "Jadi, " << endl;
    cout << celcius << " derajat celcius"
	     << " = " << fahrenheit << " derajat fahrenheit" << endl;
    cout << fahrenheit << " derajat fahrenheit"
         << " = " << reamur << " derajat reamur" << endl;
    cout << reamur << " derajat reamur"
         << " = " << naufal << " derajat naufal" << endl;

    return 0;
}
