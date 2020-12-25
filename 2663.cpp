#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, maior = 0;
	cin >> n >> k;	
	vector<int> vet;
	int end = n -1;
	for(int i = 0; i < n; i++){
		int v;
		cin >> v;
		vet.push_back(v);
		if(v > maior) maior = v;

	}
	
	sort(vet.begin(), vet.end()); 
		
		
	int pessoas = 0, cont = 0, j, ref;
	while(pessoas < k){
		
		for(j = end; j >= 0; j--){
			if(vet[j] == maior) pessoas++, cont++, ref = j;
		}
		if(pessoas >= k) break;
		for(int x = ref; x >= 0; x--){
			if(vet[x] != maior) {maior = vet[x]; break;}
		}
		
	}
	
	cout << cont << endl;
}
		
