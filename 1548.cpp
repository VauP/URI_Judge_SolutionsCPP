#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int m;
		cin >> m;
		int vet[m];
		int vet2[m];
		for(int i = 0; i < m; i++){
			cin >> vet[i];
			vet2[i] = vet[i];
		}
		
		
		int contador = 0;;

		int it, temp, posMenorInicial, posMenor, i;
		
		for(it = 0; it < m -1; it++){

			posMenorInicial = it;
			posMenor = it + 1;
			
			for( i = posMenorInicial + 1; i < m; i++){
				if(vet[i] > vet[posMenorInicial]){
					posMenor = i;
				}
				if(vet[posMenor] > vet[posMenorInicial]){
					temp = vet[posMenorInicial];
					vet[posMenorInicial] = vet[posMenor];
					vet[posMenor] = temp;
				}
				
			}
		}
		
		for(int x = 0; x < m; x++){
			if(vet[x] == vet2[x]) contador++;
		}
			
		
		
		cout << contador << endl;
	}
}
