#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, maior = 0;
	cin >> n;
	int vet[n];
	
	for(int i = 0; i < n; ++i){
		cin >> vet[i];
		if(vet[i] > maior) maior = vet[i];
	}

	bool var = false;
	
	while(++maior){
		
		for(int i = 0; i < n ; ++i){
			if(maior % vet[i] != 1) var = false;
		}
		if(var = true) break;
	}
	cout << maior << endl;

}
	
