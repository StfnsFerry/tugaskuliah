#include <iostream>

using namespace std;

int main (){
	
	int x;
	float r;
	float t;
	float keliling;
	float volume;
	
	cin>>x;
	
	if (x == 1){
		
		cout<<"Masukan Jari jari tabung = ";
		cin>>r;
		
		keliling = (2*22*r)/7;
		
		cout<<"Hasil dari Keliling alas tabung adalah "<<keliling;
	}
	
	else if (x == 2){
		
		cout<<"Masukan Jari jari tabung = ";
		cin>>r;
		cout<<"Masukan Tinggi tabung = ";
		cin>>t;
		
		volume = (22*r*r*t)/7;
		cout<<"Hasil dari volume kubus adalah = "<<volume;
	}
	
	else {
		cout<<"Syntax Error";
	}
	
	return 0;
}
