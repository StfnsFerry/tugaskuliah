#include <iostream>

using namespace std;

int deret_aritmatika (int n, int a, int b){
	int hasil;
	
	hasil = n = a + (n-1) * b;
	
	return hasil;
}

int main (){
	
	int n;
	int a;
	int b;
	
	cin>>n;
	cin>>a;
	cin>>b;
	cout<<"Jumlah bilangan hingga suku ke- "<<n<<" dari barisan Aritmatika ini adalah "<<deret_aritmatika(n,a,b);
	
	return 0;
}
