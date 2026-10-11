#include <iostream>
using namespace std;

int main() 
{
    string nama, nim;
    float uts, uas, rata;

    cout << "===== PENILAIAN MAHASISWA =====" << endl;
    cout << "Nama Mahasiswa : ";
    getline(cin, nama);
    cout << "NIM            : ";
    cin >> nim;
    cout << "Nilai UTS      : ";
	cin >> uts;
    cout << "Nilai UAS      : ";
    cin >> uas;
	
	rata = (uts + uas) / 2;
	string status = (rata >= 60) ? "Lulus" : "Tidak Lulus";
	
    cout << "===== HASIL PENILAIAN =====" << endl;
    cout << "Nama Mahasiswa : " << nama << endl;
    cout << "NIM            : " << nim << endl;
    cout << "Nilai UTS      : " << uts << endl;
	cout << "Nilai UAS      : " << uas << endl;
	cout << "Nilai Rata-Rata : " << rata << endl;
	cout << "Status         : " << status << endl;
	return 0;
}
