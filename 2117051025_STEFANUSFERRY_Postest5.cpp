#include <iostream>

using namespace std;

int main() {
	
	int awal,akhir;
	int size_tiga = 0, size_tujuh = 0,size_tiga_tujuh= 0;
	int array_tiga[size_tiga],array_tujuh[size_tujuh],array_tiga_tujuh[size_tiga_tujuh];
	
	cin>> awal;
	
	cin>> akhir;
	
	for(int i = awal; i <= akhir; i++){
		
		if ( i % 3 == 0 && i % 7 == 0){
			array_tiga_tujuh[size_tiga_tujuh] = i;
			size_tiga_tujuh++;		
		}
		
		else if ( i % 7 == 0){
			array_tujuh[size_tujuh] = i;	
			size_tujuh++;
		}
		
		else if ( i % 3 == 0){
			array_tiga[size_tiga] = i;
			size_tiga++;
		}
		
	}
	
	cout<<"Bagi tiga dan tujuh: \n";
	
	for(int i = 0; i < size_tiga_tujuh; i++){
		cout<<array_tiga_tujuh[i] <<" ";
	}
	
	cout<<endl;
	
	cout<<"Bagi tiga: \n";
	
	for(int i = 0; i < size_tiga; i++){
		cout<<array_tiga[i] << " ";
	}
	cout<<endl;
	
	cout<<"Bagi tujuh: \n";
	
	for(int i = 0; i < size_tujuh; i++){
		cout<<array_tujuh[i] << " ";
	}
	
	return 0;
}


