#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	while(cin >> t){
		float vet[t];
		for(int i = 0; i < t; i++){
			cin >> vet[i];
		}
		float menor = 12;
		for(int i = 0; i < t; i++){
			if(vet[i] <= menor) menor = vet[i];
		}
		cout << menor << endl;
	}
}
