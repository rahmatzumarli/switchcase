#include <iostream>
using namespace std;

int main()
{
	 // int x;
	// for (x=4;x<9;x++)
	// {
	// 	cout<<"Imkom Ke  - "<<x<<endl;

	// }


	// while (x<9)
	// {
	// 	cout<<"Imkom Ke - "<<x<<endl;
	// 	x++;
	// }


	int x,y=1,jumlah=0;
	float a;
	cout<<"Masukkan Nilai : ";cin>>x;
	while(y<=x)
	{
		cout<<"Nilai "<<y<<endl;
		cin>>a;
		jumlah = jumlah + a;
		y++;
	}	
	cout<<"Total "<<jumlah<<endl;
	return 0;

	// int x;
	// cout<<"Banyaknya deret Angka : "; cin>>x;
	// do{
	// 	cout<<x<<endl;
	// 	x--;
	// } while (x);

	// int x;
	// while (x){
	// 	cout<<x<<endl;
		
	// } 
	// do {
		
	// 	cout<<"Banyaknya Deret Angka : ";cin>>x;
	// 	x++;
	// }

	
}
