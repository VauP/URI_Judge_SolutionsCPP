#include <bits/stdc++.h>
using namespace std;

int main(){
	long n, total = 0;
	cin >> n;
	long int vet[n];
	for(long int i = 0; i < n; i++){
		cin >> vet[i];
	}
    long int k = sizeof(vet) / sizeof(vet[0]);
	sort(vet, vet + k);
	
	
	vector<long int> chars(n);
	long int var = 0, ref = 0;
	for(long int i = 0; i < n; i++){
		
		bool ver = true;
		
		long int cont = 0;
		
		for(long int x = 0; x < n; x++){
			if(chars.at(x) == vet[i]) ver = false;
		}
		
		for(long int j = 0; j < n; j++){
			if(vet[j] == vet[i]) cont++;
		}
		
		if(ver == true){
			var++;
			total += var * (cont);
			chars[ref] = vet[i];
			ref++;
		}
	
	
	}
	cout << total << endl;
}
