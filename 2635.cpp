#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		string vet[n];
		for(int i = 0; i < n; i++){
			cin >> vet[i];
		}
		int q;
		cin >> q;
		string finalVet[q];
		for(int i = 0; i < q; i++){
			cin >> finalVet[i];
		}
		
		for(int i = 0; i < q; i++){
			int cont = 0, tam = -1;
			bool ver = true;
			for(int j = 0; j < n; j++){
				
				if(vet[j].find(finalVet[i]) == 0){
				
					cont++;
					int var = vet[j].length();
					
					if(var > tam) tam = var;
					
					ver = false;
				}
			}
			if(ver == true) cout << "-1" << endl;
			else cout << cont << " " << tam << endl;
		}
	}
}
		
