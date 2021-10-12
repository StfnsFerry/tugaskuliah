#include <iostream>
using namespace std;

int main(){
	
	string variabel_nama;  
	string variabel_npm;  
	string variabel_alamat;
	
	getline(cin,variabel_nama);
	getline(cin,variabel_npm);
	getline(cin,variabel_alamat); 
	
	cout<<"Nama saya \""<<variabel_nama<<"\" dengan NPM "<<variabel_npm<<" dan beralamat di "<<variabel_alamat;  
	cout<<"\n \n>\\\\< \n";
	cout<<variabel_nama;
	
	return 0;	
}
