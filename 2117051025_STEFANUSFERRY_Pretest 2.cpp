#include <iostream>
#include <cmath>

using namespace std;

double body_mass_index (int berat , double tinggi){
	double hasil;
	
	hasil = berat/(tinggi*tinggi);
	
	return hasil;
}

int main(){
	
	int berat;
	double tinggi;
	
	cin>>berat;
	cin>>tinggi;
	
	cout<<body_mass_index(berat,tinggi);
	
	return 0;
}
