#include <iostream>
using namespace std;
int main()
{
	int pilihan, bulan, bayar, kembalian, total,harga;
	char back;
	do
	{
	
	cout<<"\t\t\tIMKOM ACADEMY";
	cout<<"\n\t\t    Jl. Sepakbola No.120";
	cout<<"\n====================================================";
	cout<<"\nJenis Paket Kursus ";
	cout<<"\n1. Pemrogramman C++\t\tRp 1.200.000 / bulan";
	cout<<"\n2. Pemrogramman Android\t\tRp 3.000.000 /bulan";
	cout<<"\n3. Pemrogramman Java\t\tRp 4.000.000 /bulan";
	cout<<"\n4. Desain Grafis\t\tRp 700.000 /bulan";
	cout<<"\n5. Autocad\t\t\tRp 900.000 /bulan";
	cout<<"\n6. Spss\t\t\t\tRp 800.000 /bulan";
	cout<<"\n7. Teknisi Komputer\t\tRp 800.000 /bulan";
	cout<<"\n8. Mikrotik\t\t\tRp 1.500.000 /bulan";
	cout<<"\n9. Exit";
	cout<<"\n====================================================";
	ulangi:
	cout<<"\nMasukan Pilihan : ";cin>>pilihan;

	switch (pilihan)
	{
		case 1:
		cout<<"**Anda Memilih Pemrogramman C++**";
		harga=1200000;
		cout<<"\nMasukkan Jumlah Bulan : ";cin>>bulan;
			total=harga*bulan;
		cout<<"Total Tagihan :  Rp. "<<total<<endl;
		cout<<"Dibayar : Rp. ";cin>>bayar;
			kembalian=bayar-total;
		cout<<"kembalian : Rp.  "<<kembalian<<endl;
		cout<<"**Terima Kasih**";
		cout<<"\nkembali ke Menu (y/N)";cin>>back;
		break;
		case 2:
		cout<<"**Anda Memilih Pemrogramman Android**";
		harga=3000000;
		cout<<"\nMasukkan Jumlah Bulan : ";cin>>bulan;
			total=harga*bulan;
		cout<<"Total Tagihan :  Rp. "<<total<<endl;
		cout<<"Dibayar : Rp. ";cin>>bayar;
			kembalian=bayar-total;
		cout<<"kembalian : Rp.  "<<kembalian<<endl;
		cout<<"**Terima Kasih**";
		cout<<"\nkembali ke Menu (y/N)";cin>>back;
		break;
		case 3:
		cout<<"**Anda Memilih Pemrogramman Java**";
		harga=4000000;
		cout<<"\nMasukkan Jumlah Bulan : ";cin>>bulan;
			total=harga*bulan;
		cout<<"Total Tagihan :  Rp. "<<total<<endl;
		cout<<"Dibayar : Rp. ";cin>>bayar;
			kembalian=bayar-total;
		cout<<"kembalian : Rp.  "<<kembalian<<endl;
		cout<<"**Terima Kasih**";
		cout<<"\nkembali ke Menu (y/N)";cin>>back;
		break;
		case 4:
		cout<<"**Anda Memilih Desain Grafis**";
		harga=700000;
		cout<<"\nMasukkan Jumlah Bulan : ";cin>>bulan;
			total=harga*bulan;
		cout<<"Total Tagihan :  Rp. "<<total<<endl;
		cout<<"Dibayar : Rp. ";cin>>bayar;
			kembalian=bayar-total;
		cout<<"kembalian : Rp.  "<<kembalian<<endl;
		cout<<"**Terima Kasih**";
		cout<<"\nkembali ke Menu (y/N)";cin>>back;
		break;
		case 5:
		cout<<"**Anda Memilih Autocad**";
		harga=900000;
		cout<<"\nMasukkan Jumlah Bulan : ";cin>>bulan;
			total=harga*bulan;
		cout<<"Total Tagihan :  Rp. "<<total<<endl;
		cout<<"Dibayar : Rp. ";cin>>bayar;
			kembalian=bayar-total;
		cout<<"kembalian : Rp.  "<<kembalian<<endl;
		cout<<"**Terima Kasih**";
		cout<<"\nkembali ke Menu (y/N)";cin>>back;
		break;
		case 6:
		cout<<"**Anda Memilih Spss**";
		harga=800000;
		cout<<"\nMasukkan Jumlah Bulan : ";cin>>bulan;
			total=harga*bulan;
		cout<<"Total Tagihan :  Rp. "<<total<<endl;
		cout<<"Dibayar : Rp. ";cin>>bayar;
			kembalian=bayar-total;
		cout<<"kembalian : Rp.  "<<kembalian<<endl;
		cout<<"**Terima Kasih**";
		cout<<"\nkembali ke Menu (y/N)";cin>>back;
		break;
		case 7:
		cout<<"**Anda Memilih Teknisi Komputer**";
		harga=800000;
		cout<<"\nMasukkan Jumlah Bulan : ";cin>>bulan;
			total=harga*bulan;
		cout<<"Total Tagihan :  Rp. "<<total<<endl;
		cout<<"Dibayar : Rp. ";cin>>bayar;
			kembalian=bayar-total;
		cout<<"kembalian : Rp.  "<<kembalian<<endl;
		cout<<"**Terima Kasih**";
		cout<<"\nkembali ke Menu (y/N)";cin>>back;
		break;
		case 8:
		cout<<"**Anda Memilih Mikrotik**";
		harga=1500000;
		cout<<"\nMasukkan Jumlah Bulan : ";cin>>bulan;
			total=harga*bulan;
		cout<<"Total Tagihan :  Rp. "<<total<<endl;
		cout<<"Dibayar : Rp. ";cin>>bayar;
			kembalian=bayar-total;
		cout<<"kembalian : Rp.  "<<kembalian<<endl;
		cout<<"**Terima Kasih**";
		cout<<"\nkembali ke Menu (y/N)";cin>>back;
		cout<<"\nkembali ke Menu (y/N)";cin>>back;
		break;
		case 9:
		exit(0);
		default:
		goto ulangi;
	}
	// 
}
while (back);
// cout<<"Terima Kasih Telah Telah Bergabung Bersama IMKOM ACADEMY";
return 0;
}