#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	while(cin >> n){
		
		long long int vet[n];
		for(long long int a = 0; a < n; a++){
			cin >> vet[a];
		}
		long long int i = 0;
		long long int j = n - 1;
		long long int somaR = 0, somaG = 0;
		while(i <= j){
			if((somaR + vet[i]) <= (somaG + vet[j])){

				somaR += vet[i];
				i++;
			}

			else{
				somaG += vet[j];
				j--;
			}
		}
		
		if(somaR >= somaG) cout << somaR - somaG << endl;

		else cout << somaG - somaR << endl;
	}
}


