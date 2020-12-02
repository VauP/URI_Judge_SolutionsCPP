#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, q, v, i;
	
	while(cin >> n >> q){
		int vet[n];
		for(i = 0; i < n; i++){
			cin >> vet[i];
		}
		sort(vet, vet + n, greater<int>());
		for(i = 0; i < q; i++){
			cin >> v;
			cout << vet[v-1] << endl;
		}
	}
}
