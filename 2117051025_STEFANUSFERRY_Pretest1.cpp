#include <iostream>
using namespace std;

int main (){
	
	string nama;
	string nomor;
	string alamat;
	string alasan;
	string z;
	
	
	cout<<"==================================\n";
	cout<<"Nama	: Stefanus Ferry Susanto \n";
	cout<<"NPM	: 2117051025\n";
	cout<<"==================================\n\n";
	
	//Input
	form:
		cout<<"Form Pendaftaran Gang Lampung Manji \n \n";
		cout<<"Nama Pendaftar		: ";
		getline(cin,nama);
		cout<<"Nomor HP Pendaftar	: "; 
		getline(cin,nomor);
		cout<<"Alamat Pendaftar	: "; 
		getline(cin,alamat);
		cout<<"Alasan Mendaftar	: ";
		getline(cin,alasan); 
		
		//Output
		cout<<"\nData Anda : \a\n";
		cout<<"Nama Pendaftar	: "<<nama<<endl;
		cout<<"Nomor HP	: "<<nomor<<endl;
		cout<<"Alamat		: "<<alamat<<endl;
		cout<<"Alasan		: "<<alasan<<endl;
		
		
		cout<<"\nApakah Data anda sudah benar? (Y/N) \n";
		getline(cin,z);
		
	if (z=="n" or z=="N"){
		system("CLS");
		goto form;
	}
	
	else if(z=="y" or z=="Y"){
		system("CLS");
		cout<<"Selamat Anda telah bergabung kedalam Gang Lampung Manji!";
	}
		
	else{
		cout<<"Maaf, Pilihan Tidak ada!";
	}
		
	return 0;
	
}
