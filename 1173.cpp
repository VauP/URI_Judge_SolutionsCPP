#include <iostream>

using namespace std;

int main(){
	
	int vet[10];
	
	int n;
	
	cin >> n;
	
	vet[0] = n;
	
	cout << "N[0] = " << n << endl;
	
	for ( int i = 1; i < 10; i++){
		
		vet[i] = 2 * vet[i-1];
		cout << "N[" << i << "] = " << vet[i] << endl;
	}
	
	
	
	}
