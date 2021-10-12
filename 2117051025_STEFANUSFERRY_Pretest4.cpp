#include <iostream>

using namespace std;

int main(){
	
	int i;
	int n;
	
	cin>>i;
	cin>>n;
	
	while(i <= n){
		
		if (i % 3 == 0 && i != 0){
			cout<<i<<"\n";
		}
		i++;
		
	}
	
	return 0;
}
