#include <bits/stdc++.h>
using namespace std;

void solve(int n){
	int vet[n];
	int pont[n];
	for(int i = 0; i < n; i++)
		cin >> vet[i];
	for(int i = 0; i < n; i++)
		cin >> pont[i];
		

		
	int tam = n;
	int temp, tempPont, total = 0;

	
	for(int i = 0; i < tam -1; i++){

		for(int j = 0; j < tam - i - 1; j++){
			if(vet[j] > vet[j+1]){
				total += pont[j] + pont[j+1];
				tempPont = pont[j];
				pont[j] = pont[j+1];
				pont[j+1] = tempPont;
			    temp = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = temp;
			}
		}
	}
	
	cout << total << endl;
}
int main(){
	int n;
	while(cin >> n){
		solve(n);
	}
}

