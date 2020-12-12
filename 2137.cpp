#include <bits/stdc++.h> 
using namespace std;

int main(){
	int cont;
	
	while(cin >> cont){
		//string t[cont];
		int vet[cont];
		int ref = cont;
			for(int i = 0; i < ref; i++){
				cin >> vet[i];
			}
			int n = sizeof(vet) / sizeof(vet[0]);
			sort(vet, vet + n);
			for (int i = 0; i < ref; ++i){
				 printf("%04d\n", vet[i]);	
			}
		}
	}
