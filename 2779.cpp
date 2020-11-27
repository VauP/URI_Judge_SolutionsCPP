#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
	
	int cont, var, jaPossui, k = 0;
	
	cin >> jaPossui >> cont;
	int vet[cont];
	
	while(cont--){
		
		int repetida = 0;
		cin >> var;
		vet[k] = var;
		k++;
		for(int i = 0; i < k; i++){
			if(var == vet[i]) repetida++;
		}
		if(repetida == 1) jaPossui--;
	}
	
	cout << jaPossui << endl;
			
	
}
