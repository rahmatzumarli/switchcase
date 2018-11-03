#include <iostream>
using namespace std;

int  Pilihan;
string text;
int main()
{
	
	cout<<"Daftar Paket Kursus IMKOM ACADEMY : 	";
	cout<<"\n \t1.  Design Grafis ";
	cout<<"\n \t2. AutoCad ";
	cout<<"\n \t3. Pemrogramman ";
	cout<<"\n \t4. Teknisi Komputer ";
	cout<<"\n \t5. Mikrotik ";

	ulangi:
	cout<<"\nMasukkan Pilihan : ";cin>>Pilihan;

	switch (Pilihan)
	{
		case 1:
		
			text="Anda Memilih Design Grafis ";
		break;
		case 2:
		
			text="Anda Memilih AutoCad ";
		break;
		case 3:
		
			text="Anda Memilih Pemrogramman ";
		break;
		case 4:
		
			text="Anda Memilih Teknisi Komputer";
		break;
		case 5:
		
			text="Mikrotik";
		break;
		default:
		goto ulangi;
	}

	cout<<text;
}