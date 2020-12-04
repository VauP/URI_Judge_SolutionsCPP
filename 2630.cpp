#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
	int cont, v = 1;
	string t;
	int vet[3];
	cin >> cont;
	while(cont--){
		cin >> t >> vet[0] >> vet[1] >> vet[2];
		
		if(t == "min"){
			int m = min(vet[0], vet[1]);
			m = min(m, vet[2]);
			cout << "Caso #" << v << ": " << m << endl;
		}
		else if(t == "max"){
			int m = max(vet[0], vet[1]);
			m = max(m, vet[2]);
			 cout << "Caso #" << v << ": " << m << endl;
		}
		else if(t == "mean"){
			int m = (int) ((vet[0] + vet[1] + vet[2]) /3);
			cout << "Caso #" << v << ": " << m << endl;
		}
		else if(t == "eye"){
			double r =((vet[0] * 0.3) + (vet[1] * 0.59) + (vet[2] * 0.11));
			cout << "Caso #" << v << ": " << floor(r) << endl;
		}
		v++;
	}
}
				
	
