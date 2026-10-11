#include <iostream>
using namespace std;
int main () { 
int Nilai, nilai;
string status;

cout<<"Masukkan nilai pertama : ";
cin>>Nilai;
cout<<"\nMasukkan nilai kedua : ";
cin>>nilai;

if((Nilai>=60) && (nilai>=60))
{ 
status = "Lulus";
}
else
{
	status = "Gagal";
}
cout<<"status Anda : "<<status;


	return 0;
}

