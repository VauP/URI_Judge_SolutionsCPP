#include <bits/stdc++.h>
using namespace std;
int main(){
	int cont;
	cin >> cont;
	while(cont--){
		int p;
		bool ref = true;
		cin >> p;
		string vet[p];
		for(int i = 0; i < p; i++){
			cin >> vet[i];
		}
		
		for(int i = 0; i < p; i++){
			if(vet[i] != vet[0]) ref = false;
		}
		if(ref == false) cout << "ingles" << endl;
		else cout << vet[0] << endl;
	}
}
			
