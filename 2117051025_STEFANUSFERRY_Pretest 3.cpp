#include <iostream>

using namespace std;

int main(){
	
	int berat;
	double tinggi;
	double hasil;
	
	cin>>berat;
	cin>>tinggi;
	hasil = berat/(tinggi*tinggi);
	cout<<hasil <<endl;
	
	
	
	if (hasil < 18.5){
		cout<<"Underweight";
	}
	
	else if (hasil >= 18.5 && hasil < 25){
		cout<<"Normal Weight";
	}
	
	else if (hasil >= 25.0 && hasil < 30){
		cout<<"Overweight";
	}
	
	else if (hasil >= 30.0 && hasil < 35){
		cout<<"Obesity class I";
	}
	
	else if (hasil >= 35.0 && hasil < 40){
		cout<<"Obesity class II";
	}
	
	else if (hasil >= 40 ){
		cout<<"Obesity class III";
	}
	
	else
	
	
	return 0;
}
